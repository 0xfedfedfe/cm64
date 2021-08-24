#include "libultra_internal.h"
#include <PR/console_type.h>

// TODO: merge with osEepromWrite
typedef struct {
    u16 unk00;
    u8 unk02;
    u8 unk03;
} unkStruct;

s32 __osEepStatus(OSMesgQueue *, unkStruct *);
s32 osEepromProbe(OSMesgQueue *mq) {
    s32 status = 0;
    unkStruct sp18;

    __osSiGetAccess();
    if (gConsoleType == CONSOLE_N64) {
        status = __osEepStatus(mq, &sp18);
        if (status == 0 && (sp18.unk00 & 0x8000) != 0) {
            status = 1;
        } else {
            status = 0;
        }
    } else if (gConsoleType == CONSOLE_IQUE) {
        s32 __osBbEepromSize = * (s32*) 0x80000360;

        if (__osBbEepromSize == 0x200) {
            status = 1;
        }

        if (__osBbEepromSize == 0x800) {
            status = 2;
        }
    }
    __osSiRelAccess();
    return status;
}
