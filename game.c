#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "game.h"

void Game()
{
	field** units;
	units=(field**)malloc(4*sizeof(field*));
	for(int i=0; i<4; i++)
	{
		units[i]=(field*)malloc(4*sizeof(field*));
	}
	field_init(units);
}

void field_init(field** units)
{
	int i, j, k, flag;
	char buf[4], numbers[15][4]={{"1 \0"}, {"2 \0"}, {"3 \0"}, {"4 \0"}, {"5 \0"}, 
	{"6 \0"}, {"7 \0"}, {"8 \0"}, {"9 \0"}, {"10\0"}, {"11\0"}, {"12\0"}, {"13\0"}, 
	{"14\0"}, {"15\0"}};
	srand((unsigned int)time(NULL));
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			strcpy(units[i][j].unit, "  \0");
		}
	}
	/*for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%s ", units[i][j].unit);
		}
		printf("\n");
	}*/
	for(k=0; k<16; k++)
	{
		i=rand()%4;
		j=rand()%4;
		strcpy(buf, numbers[k]);
		while(1)
		{
			if(!strcmp(units[i][j].unit, "  \0"))
			{
				strcpy(units[i][j].unit, buf);
				break;
			}
			else
			{
				i=rand()%4;
				j=rand()%4;
			}
		}
	}
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			flag=0;
			for(k=0; k<16; k++)
			{
				if(!strcmp(units[i][j].unit, numbers[k]))
				{
					flag=1;
					k=16;
				}
			}
			if(!flag)
			{
				strcpy(units[i][j].unit, "  \0");
			}
		}
	}
//	strcpy(buf,numbers[14]);
//	i=rand()%4;
//	j=rand()%4;
//	strcpy(units[i][j].unit, buf);
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%s ", units[i][j].unit);
		}
		printf("\n");
	}
}
