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
		units[i]=(field*)malloc(sizeof(field*));
	}
	field_init(units);
	print_field(units);
	swap(units);
	print_field(units);
}

void field_init(field** units)
{
	int i, j, k;
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
	for(k=0; k<15; k++)
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
}

void print_field(field** units)
{
	for(int i=0;i<4;i++)
	{
		printf(" ___   ___   ___   ___ \n");
		printf("|");
		for(int j=0;j<4;j++)
		{
			printf("%s | ", units[i][j].unit);
			if(j<3)
			{
				printf("|");
			}
		}
		printf("\n ‾‾‾   ‾‾‾   ‾‾‾   ‾‾‾ \n");
	}
	printf("\n");
}

void swap (field** units)
{
	int m, n, i, j;
	char storona;
	scanf("%c", &storona);
	for(m = 0; m < 4; m++)
	{
		for(n = 0; n < 4; n++)
		{
			if(strcmp(units[m][n].unit, "  \0") == 0)
			{
				i = m;
				j = n;
			}
		}
	}
	if (storona == 'w')
	{
		m = i + 1;
        	n = j;
		if (m < 4)
		{
			strcpy(units[i][j].unit, units[m][n].unit);
			strcpy(units[m][n].unit, "  \0");
		}
	}
        if (storona == 'a')
        {
                m = i;
                n = j +1;
                if (n < 4)
                {
                        strcpy(units[i][j].unit, units[m][n].unit);
                        strcpy(units[m][n].unit, "  \0");
                }
        }
        if (storona == 's')
        {
                m = i - 1;
                n = j;
                if (m < 4)
                {
                        strcpy(units[i][j].unit, units[m][n].unit);
                        strcpy(units[m][n].unit, "  \0");
                }
        }
        if (storona == 'd')
        {
                m = i;
                n = j - 1;
                if (n < 4)
                {
                        strcpy(units[i][j].unit, units[m][n].unit);
                        strcpy(units[m][n].unit, "  \0");
                }
        }
}

