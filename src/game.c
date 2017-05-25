#include <stdio.h>
#include <fcntl.h>
#include <termios.h>
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
	while(check_win(units) == 0)
	{
		swap(units);
		system("clear");
		print_field(units);
	}
	check_win(units);
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
                if (m > -1)
                {
                        strcpy(units[i][j].unit, units[m][n].unit);
                        strcpy(units[m][n].unit, "  \0");
                }
        }
        if (storona == 'd')
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
			if(win == 16){
				printf("YOU ARE WINNER");
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

void menu ()
{
	struct termios savetty;
	struct termios tty;

	char k = 's';
	int j = -1;
	int i = 0;
	system("clear");
	if ( !isatty(0) ) { /*Проверка: стандартный ввод - терминал?*/
 		fprintf (stderr, "stdin not terminal\n");
		exit (1); /* Ст. ввод был перенаправлен на файл, канал и т.п. */
  	};

	tcgetattr (0, &tty);
	savetty = tty; /* Сохранить упр. информацию канонического режима */
	tty.c_lflag &= ~(ICANON|ECHO|ISIG);
	tty.c_cc[VMIN] = 1;
	tcsetattr (0, TCSAFLUSH, &tty);
	while(i != -1)
	{
		printf("\n\n\t\t\tПЯТНАШКИ\n");
		printf("\t\t курсовая работа по ТРПО\n\n");
		printf("\t\t\t  МЕНЮ\n\n");
		if (k == 's'|| k == 'S')
			if (j>=-1 && j < 3)
				j++;
		if (k == 'w'|| k == 'W')
			if (j>0 && j < 4)
				j--;
		if(j == 0)
		{
			printf("\t\t ************************\n");
			printf("\t\t *\t  ИГРА   \t*\n");
			printf("\t\t ************************\n");
			printf("\t\t  \t СПРАВКА \t \n");
			printf("\t\t  \t АВТОРЫ \t \n");
			printf("\t\t \t  ВЫХОД \t \n");
		}
		if (j == 1)
		{
			printf("\t\t  \t  ИГРА   \t \n");
			printf("\t\t ************************\n");
			printf("\t\t *\t СПРАВКА \t*\n");	
			printf("\t\t ************************\n");
			printf("\t\t  \t АВТОРЫ \t \n");
			printf("\t\t \t  ВЫХОД \t \n");
		}
		if (j == 2)
		{
			printf("\t\t  \t  ИГРА   \t \n");
			printf("\t\t  \t СПРАВКА \t \n");
			printf("\t\t ************************\n");
			printf("\t\t *\t АВТОРЫ \t*\n");
			printf("\t\t ************************\n");
			printf("\t\t \t  ВЫХОД \t \n");
		}
		if (j == 3)
		{
			printf("\t\t  \t  ИГРА   \t \n");
			printf("\t\t \t СПРАВКА \t\n");
			printf("\t\t  \t АВТОРЫ \t \n");
			printf("\t\t ************************\n");
			printf("\t\t *\t  ВЫХОД \t*\n");
			printf("\t\t ************************\n");
		}
		read (0, &k, 1);
		if(k == '\n') {
			switch(j) 
			{
				case 0: 
					system("clear");
					Game();
					break;
				case 1: 
					system("clear");
					printf("Пятнашки - головоломка, представляющая собой 15 квадратных костяшек с нанесенными числами от 1 до 15. Все костяшки заключены в квадратную коробку размером 4x4 (сторона квадрата коробки в четыре раза длиннее, чем у костяшки). Таким образом при размещении костяшек в коробке остается одно пустое место размером с одну костяшку, которое можно использовать для перемещения костяшек внутри коробки. Цель игры - упорядочить размещение чисел в коробке, разместив их по возрастанию слева направо и сверху вниз, начиная с костяшки с номером 1 в левом верхнем углу и заканчивая пустым местом в правом нижнем углу коробки.\n");
					read (0, &k, 1);
					break;
				case 2:
					system("clear");
					printf("Студенты СИБГУТИ\nгруппы ИС-641\nАгалаков Антон\nЗанкович Владислав\nШарапов Владимир\n");
					read (0, &k, 1);
					break;
				case 3:
					tcsetattr (0, TCSAFLUSH, &savetty);
  					exit (0);
			}
		}
		if (k == 'q') {
      		tcsetattr (0, TCSAFLUSH, &savetty);
  			exit (0);
  		}
		system("clear"); 
	}
}