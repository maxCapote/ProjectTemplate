#include "../Header/game.h"

int main(void)
{
  int move_player, move_cpu;

  display_move_options();

  move_player = get_move_player();
  move_cpu = get_move_cpu();

  display_moves_made(move_player, move_cpu);
  determine_winner(move_player, move_cpu);

  return 0;
}
