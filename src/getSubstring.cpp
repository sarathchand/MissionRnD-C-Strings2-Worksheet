/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>
int validate(char *str, int i, int j);

char * get_sub_string(char *str, int i, int j){

	int p, q, r = 0;
	char *str1;
	q = validate(str, i, j);
	if (q > 0)
	{
		for (p = 0; str[p] != '\0'; p++);
		if (i < 0)
		{
			i = 0;
		}
		if (j>p)
		{
			j = p - 1;
		}
		str1 = (char*)malloc(sizeof(char)*100);
		for (i = i; i <= j; i++)
		{
			str1[r] = str[i];
			r++;
		}
		str1[r] = '\0';
		return str1;

	}
	else
	{

		return NULL;
	}
}
int validate(char *str, int i, int j)
{
	int p;
	if (str == NULL)
	{
		return -1;
	}
	if (i > j)
	{
		return -1;
	}
	else
	{
		return 1;
	}

}
