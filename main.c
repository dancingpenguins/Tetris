#include <clutter/clutter.h>
#include <stdlib.h>

#include "tetris.h"

#define BLOCK_DIMENSION 30

ClutterActor *stage;

int
main (int argc, char **argv)
{
  ClutterColor black = {0x00, 0x00, 0x00, 0xff};

  clutter_init (&argc, &argv);

  stage = clutter_stage_get_default ();
  
  clutter_actor_set_size (stage, 
			  TETRIS_BOARD_WIDTH*BLOCK_DIMENSION,
			  TETRIS_BOARD_HEIGHT*BLOCK_DIMENSION);
  clutter_stage_set_color (CLUTTER_STAGE (stage), &black);
  
  clutter_actor_show (stage);
  
  clutter_main();
  
  return EXIT_SUCCESS;
}
