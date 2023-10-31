#pragma once
// random_game.h

#ifndef RANDOM_GAME_H
#define RANDOM_GAME_H

int get_random_number(int min, int max);
int ask_for_answer(int random, int min, int max);
bool check_for_match(int random, int number, int loops);

#endif
