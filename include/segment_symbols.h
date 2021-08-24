#ifndef SEGMENT_SYMBOLS_H
#define SEGMENT_SYMBOLS_H

#ifndef NO_SEGMENTED_MEMORY
#define DECLARE_SEGMENT(name) \
    extern u8 _##name##SegmentRomStart[]; \
    extern u8 _##name##SegmentRomEnd[];

#define DECLARE_ACTOR_SEGMENT(name) \
    DECLARE_SEGMENT(name##_rnc2) \
    DECLARE_SEGMENT(name##_geo)

#define DECLARE_LEVEL_SEGMENT(name) \
    DECLARE_SEGMENT(name) \
    DECLARE_SEGMENT(name##_segment_7)

DECLARE_ACTOR_SEGMENT(common0)
DECLARE_ACTOR_SEGMENT(common1)
DECLARE_ACTOR_SEGMENT(group0)
DECLARE_ACTOR_SEGMENT(group1)
DECLARE_ACTOR_SEGMENT(group2)
DECLARE_ACTOR_SEGMENT(group3)
DECLARE_ACTOR_SEGMENT(group4)
DECLARE_ACTOR_SEGMENT(group5)
DECLARE_ACTOR_SEGMENT(group6)
DECLARE_ACTOR_SEGMENT(group7)
DECLARE_ACTOR_SEGMENT(group8)
DECLARE_ACTOR_SEGMENT(group9)
DECLARE_ACTOR_SEGMENT(group10)
DECLARE_ACTOR_SEGMENT(group11)
DECLARE_ACTOR_SEGMENT(group12)
DECLARE_ACTOR_SEGMENT(group13)
DECLARE_ACTOR_SEGMENT(group14)
DECLARE_ACTOR_SEGMENT(group15)
DECLARE_ACTOR_SEGMENT(group16)
DECLARE_ACTOR_SEGMENT(group17)

DECLARE_SEGMENT(entry)
DECLARE_SEGMENT(engine)
DECLARE_SEGMENT(behavior)
DECLARE_SEGMENT(scripts)
DECLARE_SEGMENT(goddard)
extern u8 _goddardSegmentStart[];

DECLARE_LEVEL_SEGMENT(menu)
DECLARE_LEVEL_SEGMENT(intro)
DECLARE_LEVEL_SEGMENT(ending)

#define STUB_LEVEL(_0, _1, _2, _3, _4, _5, _6, _7, _8)
#define DEFINE_LEVEL(_0, _1, _2, folder, _4, _5, _6, _7, _8, _9, _10) DECLARE_LEVEL_SEGMENT(folder)

#include "levels/level_defines.h"

#undef STUB_LEVEL
#undef DEFINE_LEVEL

DECLARE_SEGMENT(segment2_rnc2)

DECLARE_SEGMENT(water_skybox_rnc2)
DECLARE_SEGMENT(ccm_skybox_rnc2)
DECLARE_SEGMENT(clouds_skybox_rnc2)
DECLARE_SEGMENT(bitfs_skybox_rnc2)
DECLARE_SEGMENT(wdw_skybox_rnc2)
DECLARE_SEGMENT(cloud_floor_skybox_rnc2)
DECLARE_SEGMENT(ssl_skybox_rnc2)
DECLARE_SEGMENT(bbh_skybox_rnc2)
DECLARE_SEGMENT(bidw_skybox_rnc2)
DECLARE_SEGMENT(bits_skybox_rnc2)

DECLARE_SEGMENT(fire_rnc2)
DECLARE_SEGMENT(spooky_rnc2)
DECLARE_SEGMENT(generic_rnc2)
DECLARE_SEGMENT(water_rnc2)
DECLARE_SEGMENT(sky_rnc2)
DECLARE_SEGMENT(snow_rnc2)
DECLARE_SEGMENT(cave_rnc2)
DECLARE_SEGMENT(machine_rnc2)
DECLARE_SEGMENT(mountain_rnc2)
DECLARE_SEGMENT(grass_rnc2)
DECLARE_SEGMENT(outside_rnc2)
DECLARE_SEGMENT(inside_rnc2)
DECLARE_SEGMENT(effect_rnc2)
DECLARE_SEGMENT(title_screen_bg_rnc2)

DECLARE_SEGMENT(debug_level_select_rnc2)

#ifdef VERSION_EU
DECLARE_SEGMENT(translation_de_rnc2)
DECLARE_SEGMENT(translation_en_rnc2)
DECLARE_SEGMENT(translation_fr_rnc2)
#endif

#endif

#endif // SEGMENT_SYMBOLS_H
