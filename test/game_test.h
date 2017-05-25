#ifndef GAME_TEST_H
#define GAME_TEST_H
#include <stdio.h>

typedef struct{
	char unit[4];
}field;

void swap_test(field** units, char storona);
int check_win(field** units);
void field_init(field** units);
int check_init(field** units);

#endif