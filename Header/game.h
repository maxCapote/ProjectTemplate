#ifndef GAME_H
#define GAME_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int get_move_player();
int get_move_cpu();
int display_move_options();
int display_moves_made(int move_player, int move_cpu);
int determine_winner(int move_player, int move_cpu);

#endif
