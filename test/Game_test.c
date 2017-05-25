#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ctest.h"
#include "game_test.h"

CTEST(Check_init, test1)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "4 \0");
	strcpy(units[1][0].unit, "5 \0");
	strcpy(units[1][1].unit, "6 \0");
	strcpy(units[1][2].unit, "7 \0");
	strcpy(units[1][3].unit, "8\0");
	strcpy(units[2][0].unit, "9\0");
	strcpy(units[2][1].unit, "10\0");
	strcpy(units[2][2].unit, "11\0");
	strcpy(units[2][3].unit, "12\0");
	strcpy(units[3][0].unit, "13\0");
	strcpy(units[3][1].unit, "14\0");
	strcpy(units[3][2].unit, "  \0");
	strcpy(units[3][3].unit, "15\0");
	result = check_init(units);
	ASSERT_EQUAL(0 , result);
}

CTEST(Check_init, test2)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "1 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "4 \0");
	strcpy(units[1][0].unit, "5 \0");
	strcpy(units[1][1].unit, "6 \0");
	strcpy(units[1][2].unit, "7 \0");
	strcpy(units[1][3].unit, "8\0");
	strcpy(units[2][0].unit, "9\0");
	strcpy(units[2][1].unit, "10\0");
	strcpy(units[2][2].unit, "11\0");
	strcpy(units[2][3].unit, "12\0");
	strcpy(units[3][0].unit, "13\0");
	strcpy(units[3][1].unit, "14\0");
	strcpy(units[3][2].unit, "  \0");
	strcpy(units[3][3].unit, "15\0");
	result = check_init(units);
	ASSERT_EQUAL(1 , result);
}

CTEST(Check_init, test3)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "4 \0");
	strcpy(units[1][0].unit, "5 \0");
	strcpy(units[1][1].unit, "6 \0");
	strcpy(units[1][2].unit, "7 \0");
	strcpy(units[1][3].unit, "8\0");
	strcpy(units[2][0].unit, "9\0");
	strcpy(units[2][1].unit, "10\0");
	strcpy(units[2][2].unit, "11\0");
	strcpy(units[2][3].unit, "12\0");
	strcpy(units[3][0].unit, "13\0");
	strcpy(units[3][1].unit, "  \0");
	strcpy(units[3][2].unit, "15\0");
	strcpy(units[3][3].unit, "15\0");
	result = check_init(units);
	ASSERT_EQUAL(1 , result);
}

CTEST(Check_init, test4)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "4 \0");
	strcpy(units[1][0].unit, "5 \0");
	strcpy(units[1][1].unit, "6 \0");
	strcpy(units[1][2].unit, "7 \0");
	strcpy(units[1][3].unit, "8\0");
	strcpy(units[2][0].unit, "9\0");
	strcpy(units[2][1].unit, "10\0");
	strcpy(units[2][2].unit, "11\0");
	strcpy(units[2][3].unit, "12\0");
	strcpy(units[3][0].unit, "13\0");
	strcpy(units[3][1].unit, "14\0");
	strcpy(units[3][2].unit, "15\0");
	strcpy(units[3][3].unit, "15\0");
	result = check_init(units);
	ASSERT_EQUAL(1 , result);
}

CTEST(Check_init, test5)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "4 \0");
	strcpy(units[1][0].unit, "5 \0");
	strcpy(units[1][1].unit, "6 \0");
	strcpy(units[1][2].unit, "7 \0");
	strcpy(units[1][3].unit, "8\0");
	strcpy(units[2][0].unit, "9\0");
	strcpy(units[2][1].unit, "10\0");
	strcpy(units[2][2].unit, "11\0");
	strcpy(units[2][3].unit, "12\0");
	strcpy(units[3][0].unit, "13\0");
	strcpy(units[3][1].unit, "14\0");
	strcpy(units[3][2].unit, "  \0");
	strcpy(units[3][3].unit, "20\0");
	result = check_init(units);
	ASSERT_EQUAL(1 , result);
}

CTEST(Init, test1)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	field_init(units);
	result=check_init(units);
	ASSERT_EQUAL(0 , result);
}

CTEST(Init, test2)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	field_init(units);
	result=check_init(units);
	ASSERT_EQUAL(0 , result);
}

CTEST(Init, test3)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	field_init(units);
	result=check_init(units);
	ASSERT_EQUAL(0 , result);
}

CTEST(Init, test4)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	field_init(units);
	result=check_init(units);
	ASSERT_EQUAL(0 , result);
}

CTEST(Init, test5)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	field_init(units);
	result=check_init(units);
	ASSERT_EQUAL(0 , result);
}

CTEST(Swap, test1)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "4 \0");
	strcpy(units[1][0].unit, "5 \0");
	strcpy(units[1][1].unit, "  \0");
	strcpy(units[1][2].unit, "7 \0");
	strcpy(units[1][3].unit, "8 \0");
	strcpy(units[2][0].unit, "9 \0");
	strcpy(units[2][1].unit, "10\0");
	strcpy(units[2][2].unit, "11\0");
	strcpy(units[2][3].unit, "12\0");
	strcpy(units[3][0].unit, "13\0");
	strcpy(units[3][1].unit, "14\0");
	strcpy(units[3][2].unit, "15\0");
	strcpy(units[3][3].unit, "6 \0");
	swap_test(units, 'w');
	if(!strcmp(units[1][1].unit, "10\0"))
		result = 1;
	else
		result = 0;
	ASSERT_EQUAL(1 , result);
}

CTEST(Swap, test2)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "4 \0");
	strcpy(units[1][0].unit, "5 \0");
	strcpy(units[1][1].unit, "  \0");
	strcpy(units[1][2].unit, "7 \0");
	strcpy(units[1][3].unit, "8 \0");
	strcpy(units[2][0].unit, "9 \0");
	strcpy(units[2][1].unit, "10\0");
	strcpy(units[2][2].unit, "11\0");
	strcpy(units[2][3].unit, "12\0");
	strcpy(units[3][0].unit, "13\0");
	strcpy(units[3][1].unit, "14\0");
	strcpy(units[3][2].unit, "15\0");
	strcpy(units[3][3].unit, "6 \0");
	swap_test(units, 's');
	if(!strcmp(units[1][1].unit, "2 \0"))
		result = 1;
	else
		result = 0;
	ASSERT_EQUAL(1 , result);
}

CTEST(Swap, test3)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "4 \0");
	strcpy(units[1][0].unit, "5 \0");
	strcpy(units[1][1].unit, "  \0");
	strcpy(units[1][2].unit, "7 \0");
	strcpy(units[1][3].unit, "8 \0");
	strcpy(units[2][0].unit, "9 \0");
	strcpy(units[2][1].unit, "10\0");
	strcpy(units[2][2].unit, "11\0");
	strcpy(units[2][3].unit, "12\0");
	strcpy(units[3][0].unit, "13\0");
	strcpy(units[3][1].unit, "14\0");
	strcpy(units[3][2].unit, "15\0");
	strcpy(units[3][3].unit, "6 \0");
	swap_test(units, 'a');
	if(!strcmp(units[1][1].unit, "7 \0"))
		result = 1;
	else
		result = 0;
	ASSERT_EQUAL(1 , result);
}

CTEST(Swap, test4)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "4 \0");
	strcpy(units[1][0].unit, "5 \0");
	strcpy(units[1][1].unit, "  \0");
	strcpy(units[1][2].unit, "7 \0");
	strcpy(units[1][3].unit, "8 \0");
	strcpy(units[2][0].unit, "9 \0");
	strcpy(units[2][1].unit, "10\0");
	strcpy(units[2][2].unit, "11\0");
	strcpy(units[2][3].unit, "12\0");
	strcpy(units[3][0].unit, "13\0");
	strcpy(units[3][1].unit, "14\0");
	strcpy(units[3][2].unit, "15\0");
	strcpy(units[3][3].unit, "6 \0");
	swap_test(units, 'd');
	if(!strcmp(units[1][1].unit, "5 \0"))
		result = 1;
	else
		result = 0;
	ASSERT_EQUAL(1 , result);
}

CTEST(Swap_borderline, test1)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "  \0");
	strcpy(units[0][1].unit, "1 \0");
	strcpy(units[0][2].unit, "2 \0");
	strcpy(units[0][3].unit, "3 \0");
	strcpy(units[1][0].unit, "4 \0");
	strcpy(units[1][1].unit, "5 \0");
	strcpy(units[1][2].unit, "6 \0");
	strcpy(units[1][3].unit, "7 \0");
	strcpy(units[2][0].unit, "8 \0");
	strcpy(units[2][1].unit, "9 \0");
	strcpy(units[2][2].unit, "10\0");
	strcpy(units[2][3].unit, "11\0");
	strcpy(units[3][0].unit, "12\0");
	strcpy(units[3][1].unit, "13\0");
	strcpy(units[3][2].unit, "14\0");
	strcpy(units[3][3].unit, "15\0");
	swap_test(units, 'd');
	if(!strcmp(units[0][0].unit, "  \0"))
		result = 0;
	else
		result = 1;
	ASSERT_EQUAL(0 , result);
}

CTEST(Swap_borderline, test2)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "  \0");
	strcpy(units[0][1].unit, "1 \0");
	strcpy(units[0][2].unit, "2 \0");
	strcpy(units[0][3].unit, "3 \0");
	strcpy(units[1][0].unit, "4 \0");
	strcpy(units[1][1].unit, "5 \0");
	strcpy(units[1][2].unit, "6 \0");
	strcpy(units[1][3].unit, "7 \0");
	strcpy(units[2][0].unit, "8 \0");
	strcpy(units[2][1].unit, "9 \0");
	strcpy(units[2][2].unit, "10\0");
	strcpy(units[2][3].unit, "11\0");
	strcpy(units[3][0].unit, "12\0");
	strcpy(units[3][1].unit, "13\0");
	strcpy(units[3][2].unit, "14\0");
	strcpy(units[3][3].unit, "15\0");
	swap_test(units, 's');
	if(!strcmp(units[0][0].unit, "  \0"))
		result = 0;
	else
		result = 1;
	ASSERT_EQUAL(0 , result);
}

CTEST(Swap_borderline, test3)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "  \0");
	strcpy(units[1][0].unit, "4 \0");
	strcpy(units[1][1].unit, "5 \0");
	strcpy(units[1][2].unit, "6 \0");
	strcpy(units[1][3].unit, "7 \0");
	strcpy(units[2][0].unit, "8 \0");
	strcpy(units[2][1].unit, "9 \0");
	strcpy(units[2][2].unit, "10\0");
	strcpy(units[2][3].unit, "11\0");
	strcpy(units[3][0].unit, "12\0");
	strcpy(units[3][1].unit, "13\0");
	strcpy(units[3][2].unit, "14\0");
	strcpy(units[3][3].unit, "15\0");
	swap_test(units, 'a');
	if(!strcmp(units[0][3].unit, "  \0"))
		result = 0;
	else
		result = 1;
	ASSERT_EQUAL(0 , result);
}

CTEST(Swap_borderline, test4)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "  \0");
	strcpy(units[1][0].unit, "4 \0");
	strcpy(units[1][1].unit, "5 \0");
	strcpy(units[1][2].unit, "6 \0");
	strcpy(units[1][3].unit, "7 \0");
	strcpy(units[2][0].unit, "8 \0");
	strcpy(units[2][1].unit, "9 \0");
	strcpy(units[2][2].unit, "10\0");
	strcpy(units[2][3].unit, "11\0");
	strcpy(units[3][0].unit, "12\0");
	strcpy(units[3][1].unit, "13\0");
	strcpy(units[3][2].unit, "14\0");
	strcpy(units[3][3].unit, "15\0");
	swap_test(units, 's');
	if(!strcmp(units[0][3].unit, "  \0"))
		result = 0;
	else
		result = 1;
	ASSERT_EQUAL(0 , result);
}

CTEST(Swap_borderline, test5)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "4 \0");
	strcpy(units[1][0].unit, "5 \0");
	strcpy(units[1][1].unit, "6 \0");
	strcpy(units[1][2].unit, "7 \0");
	strcpy(units[1][3].unit, "8 \0");
	strcpy(units[2][0].unit, "9 \0");
	strcpy(units[2][1].unit, "10\0");
	strcpy(units[2][2].unit, "11\0");
	strcpy(units[2][3].unit, "12\0");
	strcpy(units[3][0].unit, "  \0");
	strcpy(units[3][1].unit, "13\0");
	strcpy(units[3][2].unit, "14\0");
	strcpy(units[3][3].unit, "15\0");
	swap_test(units, 'w');
	if(!strcmp(units[3][0].unit, "  \0"))
		result = 0;
	else
		result = 1;
	ASSERT_EQUAL(0 , result);
}

CTEST(Swap_borderline, test6)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "4 \0");
	strcpy(units[1][0].unit, "5 \0");
	strcpy(units[1][1].unit, "6 \0");
	strcpy(units[1][2].unit, "7 \0");
	strcpy(units[1][3].unit, "8 \0");
	strcpy(units[2][0].unit, "9 \0");
	strcpy(units[2][1].unit, "10\0");
	strcpy(units[2][2].unit, "11\0");
	strcpy(units[2][3].unit, "12\0");
	strcpy(units[3][0].unit, "  \0");
	strcpy(units[3][1].unit, "13\0");
	strcpy(units[3][2].unit, "14\0");
	strcpy(units[3][3].unit, "15\0");
	swap_test(units, 'd');
	if(!strcmp(units[3][0].unit, "  \0"))
		result = 0;
	else
		result = 1;
	ASSERT_EQUAL(0 , result);
}

CTEST(Swap_borderline, test7)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "4 \0");
	strcpy(units[1][0].unit, "5 \0");
	strcpy(units[1][1].unit, "6 \0");
	strcpy(units[1][2].unit, "7 \0");
	strcpy(units[1][3].unit, "8 \0");
	strcpy(units[2][0].unit, "9 \0");
	strcpy(units[2][1].unit, "10\0");
	strcpy(units[2][2].unit, "11\0");
	strcpy(units[2][3].unit, "12\0");
	strcpy(units[3][0].unit, "13\0");
	strcpy(units[3][1].unit, "14\0");
	strcpy(units[3][2].unit, "15\0");
	strcpy(units[3][3].unit, "  \0");
	swap_test(units, 'w');
	if(!strcmp(units[3][3].unit, "  \0"))
		result = 0;
	else
		result = 1;
	ASSERT_EQUAL(0 , result);
}

CTEST(Swap_borderline, test8)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "4 \0");
	strcpy(units[1][0].unit, "5 \0");
	strcpy(units[1][1].unit, "6 \0");
	strcpy(units[1][2].unit, "7 \0");
	strcpy(units[1][3].unit, "8 \0");
	strcpy(units[2][0].unit, "9 \0");
	strcpy(units[2][1].unit, "10\0");
	strcpy(units[2][2].unit, "11\0");
	strcpy(units[2][3].unit, "12\0");
	strcpy(units[3][0].unit, "13\0");
	strcpy(units[3][1].unit, "14\0");
	strcpy(units[3][2].unit, "15\0");
	strcpy(units[3][3].unit, "  \0");
	swap_test(units, 'a');
	if(!strcmp(units[3][3].unit, "  \0"))
		result = 0;
	else
		result = 1;
	ASSERT_EQUAL(0 , result);
}

CTEST(Swap_borderline, test9)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "  \0");
	strcpy(units[0][2].unit, "2 \0");
	strcpy(units[0][3].unit, "3 \0");
	strcpy(units[1][0].unit, "4 \0");
	strcpy(units[1][1].unit, "5 \0");
	strcpy(units[1][2].unit, "6 \0");
	strcpy(units[1][3].unit, "7 \0");
	strcpy(units[2][0].unit, "8 \0");
	strcpy(units[2][1].unit, "9 \0");
	strcpy(units[2][2].unit, "10\0");
	strcpy(units[2][3].unit, "11\0");
	strcpy(units[3][0].unit, "12\0");
	strcpy(units[3][1].unit, "13\0");
	strcpy(units[3][2].unit, "14\0");
	strcpy(units[3][3].unit, "15\0");
	swap_test(units, 's');
	if(!strcmp(units[0][1].unit, "  \0"))
		result = 0;
	else
		result = 1;
	ASSERT_EQUAL(0 , result);
}

CTEST(Swap_borderline, test10)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "  \0");
	strcpy(units[0][3].unit, "3 \0");
	strcpy(units[1][0].unit, "4 \0");
	strcpy(units[1][1].unit, "5 \0");
	strcpy(units[1][2].unit, "6 \0");
	strcpy(units[1][3].unit, "7 \0");
	strcpy(units[2][0].unit, "8 \0");
	strcpy(units[2][1].unit, "9 \0");
	strcpy(units[2][2].unit, "10\0");
	strcpy(units[2][3].unit, "11\0");
	strcpy(units[3][0].unit, "12\0");
	strcpy(units[3][1].unit, "13\0");
	strcpy(units[3][2].unit, "14\0");
	strcpy(units[3][3].unit, "15\0");
	swap_test(units, 's');
	if(!strcmp(units[0][2].unit, "  \0"))
		result = 0;
	else
		result = 1;
	ASSERT_EQUAL(0 , result);
}

CTEST(Swap_borderline, test11)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "4 \0");
	strcpy(units[1][0].unit, "  \0");
	strcpy(units[1][1].unit, "5 \0");
	strcpy(units[1][2].unit, "6 \0");
	strcpy(units[1][3].unit, "7 \0");
	strcpy(units[2][0].unit, "8 \0");
	strcpy(units[2][1].unit, "9 \0");
	strcpy(units[2][2].unit, "10\0");
	strcpy(units[2][3].unit, "11\0");
	strcpy(units[3][0].unit, "12\0");
	strcpy(units[3][1].unit, "13\0");
	strcpy(units[3][2].unit, "14\0");
	strcpy(units[3][3].unit, "15\0");
	swap_test(units, 'd');
	if(!strcmp(units[1][0].unit, "  \0"))
		result = 0;
	else
		result = 1;
	ASSERT_EQUAL(0 , result);
}

CTEST(Swap_borderline, test12)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "4 \0");
	strcpy(units[1][0].unit, "5 \0");
	strcpy(units[1][1].unit, "6 \0");
	strcpy(units[1][2].unit, "7 \0");
	strcpy(units[1][3].unit, "8 \0");
	strcpy(units[2][0].unit, "  \0");
	strcpy(units[2][1].unit, "9 \0");
	strcpy(units[2][2].unit, "10\0");
	strcpy(units[2][3].unit, "11\0");
	strcpy(units[3][0].unit, "12\0");
	strcpy(units[3][1].unit, "13\0");
	strcpy(units[3][2].unit, "14\0");
	strcpy(units[3][3].unit, "15\0");
	swap_test(units, 'd');
	if(!strcmp(units[2][0].unit, "  \0"))
		result = 0;
	else
		result = 1;
	ASSERT_EQUAL(0 , result);
}

CTEST(Swap_borderline, test13)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "4 \0");
	strcpy(units[1][0].unit, "5 \0");
	strcpy(units[1][1].unit, "6 \0");
	strcpy(units[1][2].unit, "7 \0");
	strcpy(units[1][3].unit, "  \0");
	strcpy(units[2][0].unit, "8 \0");
	strcpy(units[2][1].unit, "9 \0");
	strcpy(units[2][2].unit, "10\0");
	strcpy(units[2][3].unit, "11\0");
	strcpy(units[3][0].unit, "12\0");
	strcpy(units[3][1].unit, "13\0");
	strcpy(units[3][2].unit, "14\0");
	strcpy(units[3][3].unit, "15\0");
	swap_test(units, 'a');
	if(!strcmp(units[1][3].unit, "  \0"))
		result = 0;
	else
		result = 1;
	ASSERT_EQUAL(0 , result);
}

CTEST(Swap_borderline, test14)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "4 \0");
	strcpy(units[1][0].unit, "5 \0");
	strcpy(units[1][1].unit, "6 \0");
	strcpy(units[1][2].unit, "7 \0");
	strcpy(units[1][3].unit, "8\0");
	strcpy(units[2][0].unit, "9\0");
	strcpy(units[2][1].unit, "10\0");
	strcpy(units[2][2].unit, "11\0");
	strcpy(units[2][3].unit, "  \0");
	strcpy(units[3][0].unit, "12\0");
	strcpy(units[3][1].unit, "13\0");
	strcpy(units[3][2].unit, "14\0");
	strcpy(units[3][3].unit, "15\0");
	swap_test(units, 'a');
	if(!strcmp(units[2][3].unit, "  \0"))
		result = 0;
	else
		result = 1;
	ASSERT_EQUAL(0 , result);
}

CTEST(Swap_borderline, test15)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "4 \0");
	strcpy(units[1][0].unit, "5 \0");
	strcpy(units[1][1].unit, "6 \0");
	strcpy(units[1][2].unit, "7 \0");
	strcpy(units[1][3].unit, "8\0");
	strcpy(units[2][0].unit, "9\0");
	strcpy(units[2][1].unit, "10\0");
	strcpy(units[2][2].unit, "11\0");
	strcpy(units[2][3].unit, "12\0");
	strcpy(units[3][0].unit, "13\0");
	strcpy(units[3][1].unit, "  \0");
	strcpy(units[3][2].unit, "14\0");
	strcpy(units[3][3].unit, "15\0");
	swap_test(units, 'w');
	if(!strcmp(units[3][1].unit, "  \0"))
		result = 0;
	else
		result = 1;
	ASSERT_EQUAL(0 , result);
}

CTEST(Swap_borderline, test16)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "4 \0");
	strcpy(units[1][0].unit, "5 \0");
	strcpy(units[1][1].unit, "6 \0");
	strcpy(units[1][2].unit, "7 \0");
	strcpy(units[1][3].unit, "8\0");
	strcpy(units[2][0].unit, "9\0");
	strcpy(units[2][1].unit, "10\0");
	strcpy(units[2][2].unit, "11\0");
	strcpy(units[2][3].unit, "12\0");
	strcpy(units[3][0].unit, "13\0");
	strcpy(units[3][1].unit, "14\0");
	strcpy(units[3][2].unit, "  \0");
	strcpy(units[3][3].unit, "15\0");
	swap_test(units, 'w');
	if(!strcmp(units[3][2].unit, "  \0"))
		result = 0;
	else
		result = 1;
	ASSERT_EQUAL(0 , result);
}

CTEST(Check_win, test1)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "4 \0");
	strcpy(units[1][0].unit, "5 \0");
	strcpy(units[1][1].unit, "6 \0");
	strcpy(units[1][2].unit, "7 \0");
	strcpy(units[1][3].unit, "8\0");
	strcpy(units[2][0].unit, "9\0");
	strcpy(units[2][1].unit, "10\0");
	strcpy(units[2][2].unit, "11\0");
	strcpy(units[2][3].unit, "12\0");
	strcpy(units[3][0].unit, "13\0");
	strcpy(units[3][1].unit, "14\0");
	strcpy(units[3][2].unit, "15\0");
	strcpy(units[3][3].unit, "  \0");
	if(check_win(units))
		result = 1;
	else
		result = 0;
	ASSERT_EQUAL(1 , result);
}

CTEST(Check_win, test2)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "5 \0");
	strcpy(units[0][2].unit, "9 \0");
	strcpy(units[0][3].unit, "13\0");
	strcpy(units[1][0].unit, "2 \0");
	strcpy(units[1][1].unit, "6 \0");
	strcpy(units[1][2].unit, "10\0");
	strcpy(units[1][3].unit, "14\0");
	strcpy(units[2][0].unit, "3 \0");
	strcpy(units[2][1].unit, "7 \0");
	strcpy(units[2][2].unit, "11\0");
	strcpy(units[2][3].unit, "15\0");
	strcpy(units[3][0].unit, "4 \0");
	strcpy(units[3][1].unit, "8 \0");
	strcpy(units[3][2].unit, "12\0");
	strcpy(units[3][3].unit, "  \0");
	if(check_win(units))
		result = 1;
	else
		result = 0;
	ASSERT_EQUAL(0 , result);
}

CTEST(Check_win, test3)
{
	int result;
	field** units;
	units = (field**)malloc(4*sizeof(field*));
	for(int i = 0; i < 4; i++)
	{
		units[i] = (field*)malloc(sizeof(field*));
	}
	strcpy(units[0][0].unit, "1 \0");
	strcpy(units[0][1].unit, "2 \0");
	strcpy(units[0][2].unit, "3 \0");
	strcpy(units[0][3].unit, "4 \0");
	strcpy(units[1][0].unit, "5 \0");
	strcpy(units[1][1].unit, "6 \0");
	strcpy(units[1][2].unit, "7 \0");
	strcpy(units[1][3].unit, "8\0");
	strcpy(units[2][0].unit, "9\0");
	strcpy(units[2][1].unit, "10\0");
	strcpy(units[2][2].unit, "11\0");
	strcpy(units[2][3].unit, "12\0");
	strcpy(units[3][0].unit, "13\0");
	strcpy(units[3][1].unit, "15\0");
	strcpy(units[3][2].unit, "14\0");
	strcpy(units[3][3].unit, "  \0");
	if(check_win(units))
		result = 1;
	else
		result = 0;
	ASSERT_EQUAL(0 , result);
}