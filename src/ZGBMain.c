#include "ZGBMain.h"
#include "Math.h"

UINT8 next_state = StateGame;

extern UINT8* tile_replacement_tile_ptr;
extern UINT8* tile_replacement_ptr;
extern UINT8  tile_replacement_enemy_type;

void GetTileReplacement() {
	if(current_state == StateGame) {
		tile_replacement_enemy_type = (255u - *tile_replacement_tile_ptr);
		if(tile_replacement_enemy_type < N_SPRITE_TYPES) {
			*tile_replacement_ptr = 0;
			return;
		}
	}

	tile_replacement_enemy_type = 255u;
	*tile_replacement_ptr = *tile_replacement_tile_ptr;
}