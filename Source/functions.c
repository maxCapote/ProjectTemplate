#include "../Header/game.h"

int get_move_player()
{
  printf("Your Move (Ex: 0): ");
  return getchar() - '0';
}

int get_move_cpu()
{
  srand(time(0));
  return rand() % 3;
}

int display_move_options()
{
  printf("0) Rock\n1) Paper\n2) Scissors\n\n");
  return 0;
}

int display_moves_made(int move_player, int move_cpu)
{
  printf("\nPlayer move: %i\nCPU move: %i\n\n", move_player, move_cpu);
  return 0;
}

int determine_winner(int move_player, int move_cpu)
{
  if (move_player == move_cpu)
  {
    printf("It's a draw.\n\n");
  }
  else if (((move_cpu + 1) % 3) == move_player)
  {
    printf("You win!\n\n");
  }
  else
  {
    printf("You lose.\n\n");
  }
  return 0;
}
