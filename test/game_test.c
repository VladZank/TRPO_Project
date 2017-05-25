#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "game_test.h"

void swap_test(field** units, char storona)
{
	int m, n, i, j;
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
	if((storona == 'w') || (storona == 'W'))
	{
		m = i + 1;
        	n = j;
		if (m < 4)
		{
			strcpy(units[i][j].unit, units[m][n].unit);
			strcpy(units[m][n].unit, "  \0");
		}
	}
        if((storona == 'a') || (storona == 'A'))
        {
                m = i;
                n = j +1;
                if (n < 4)
                {
                        strcpy(units[i][j].unit, units[m][n].unit);
                        strcpy(units[m][n].unit, "  \0");
                }
        }
        if((storona == 's') || (storona == 'S'))
        {
                m = i - 1;
                n = j;
                if (m > -1)
                {
                        strcpy(units[i][j].unit, units[m][n].unit);
                        strcpy(units[m][n].unit, "  \0");
                }
        }
        if((storona == 'd') || (storona == 'D'))
        {
                m = i;
                n = j - 1;
                if (n > -1)
                {
                        strcpy(units[i][j].unit, units[m][n].unit);
                        strcpy(units[m][n].unit, "  \0");
                }
        }
}

int check_win(field** units)
{	
	int win = 1;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if(win == 16)
			{
				return 1;
			}
			if(atoi(units[i][j].unit) == win)
				win++;
			else
				return 0;
		}
	}
	return 0;
}

void field_init(field** units)
{
	int i, j, k;
	char buf[4], numbers[15][4] = {{"1 \0"}, {"2 \0"}, {"3 \0"}, {"4 \0"}, {"5 \0"}, 
	{"6 \0"}, {"7 \0"}, {"8 \0"}, {"9 \0"}, {"10\0"}, {"11\0"}, {"12\0"}, {"13\0"}, 
	{"14\0"}, {"15\0"}};
	srand((unsigned int)time(NULL));
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			strcpy(units[i][j].unit, "  \0");
		}
	}
	for(k = 0; k < 15; k++)
	{
		i = rand()%4;
		j = rand()%4;
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
				i = rand()%4;
				j = rand()%4;
			}
		}
	}
}

int check_init(field** units)
{	
	int correct_num = 0, i, j, k, dnum;
	for(k = 1; k < 16; k++)
	{
		dnum = 0;
		for(i = 0; i < 4; i++)
		{
			for(j = 0; j < 4; j++)
			{
				
				if(atoi(units[i][j].unit) == k)
				{
					correct_num++;
					dnum++;
				}
			}
		}
		if(dnum != 1)
			return 1;
	}
	if(correct_num == 15)
		return 0;
	else
		return 1;
}