#ifndef GAME_H
#define GAME_H
#include <stdio.h>

typedef struct{
	char unit[4];
}field;

void Game();
void field_init(field** field);
void print_field(field** units);

#endif
