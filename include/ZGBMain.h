#ifndef ZGBMAIN_H
#define ZGBMAIN_H

#define STATES \
_STATE(STATE_GAME)\
STATE_DEF_END

#define SPRITES \
_SPRITE_DMG(SPRITE_PLAYER, player, 3, FRAME_16x16, 9)\
SPRITE_DEF_END

#include "ZGBMain_Init.h"

#endif