/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int p, i, flag = 0, q = 0, flag1 = 0;
	char *str1, t;
	str1 = (char*)malloc(sizeof(char));
	for (p = 0; str[p] != '\0'; p++);
	if (p > 0)
	{
		for (i = p - 1; flag != 1; i--)
		{
			//printf("%c", str[i]);
			//printf("%d", str[i]);
			if ((str[i] == ' ') && (str[i + 1] != ' ') && (flag1 == 1))
			{
				break;
			}
			else if (!(str[i] == ' '))
			{

				str1[q] = str[i];
				q++;
				flag1 = 1;

			}
			if (i == 0)
			{
				break;
			}
		}
	}
	str1[q] = '\0';
	for (i = 0; str1[i] != '\0'; i++);
	p = 0;
	i--;
	while (p<i)
	{

		t = str1[p];
		str1[p] = str1[i];
		str1[i] = t;
		i--;
		p++;
	}
	return str1;

}
