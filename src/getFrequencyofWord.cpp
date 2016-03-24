/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
int compare(char *p, char *q);

int count_word_in_str_way_1(char *str, char *word){
	int i, j = 0, p, q = 0, c = 0;
	char *string1;
	for (i = 0; word[i] != '\0'; i++);
	while (str[j] != '\0')
	{
		q = 0;
		string1 = (char*)malloc(sizeof(char));
		for (p = j; ((p < (i + j)) && (str[p] != '\0')); p++)
		{
			string1[q] = str[p];
			q++;
		}
		string1[q] = '\0';
		if (q == i)
		{
			if (compare(string1, word))
			{
				c++;
			}
		}
		j++;


	}


	return c;

}


int compare(char *p, char *q)

{
	int i = 0, j = 0;
	while (p[i] != '\0')
	{
		if (p[i] == q[i])
		{
			j++;
		}
		i++;
	}
	if (i == j)
	{
		return 1;
	}
	else

	{
		return 0;
	}


}

/*int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}*/

