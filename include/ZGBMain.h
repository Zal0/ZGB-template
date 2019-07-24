#ifndef ZGBMAIN_H
#define ZGBMAIN_H

#define STATES \
_STATE(StateGame)\
STATE_DEF_END

#define SPRITES \
_SPRITE_DMG(SpritePlayer, player, 3, FRAME_16x16, 1)\
SPRITE_DEF_END

#include "ZGBMain_Init.h"

#endif