#pragma once
#ifndef STRINGMATCHING_H_
#define	STRINGMATCHING_H_
#include <iostream>

const int MAXSIZE = 1000;
typedef struct
{
	char* ch;
	int length;
}Sstring;

void creatString(Sstring &str)
{
	str.ch = new char[MAXSIZE];
	str.length = 0;
}

int Index_BF(Sstring S, Sstring T, int pos)
{
	int i = pos, j = 1;
	while (i <= S.length && j <= T.length)
	{
		if (S.ch[i] == T.ch[j])
		{
			++i;
			++j;
		}
		else
		{
			i = i - j + 2;
			j = 1;
		}
	}
	if (j > T.length)
		return i - T.length;
	else
		return 0;
}
//BF string match algo

//KMP string match algo

#endif // !STRINGMATCHING_H_

