/*

Given a string of words, you need to find the highest scoring word.

Each letter of a word scores points according to its position in the alphabet: a = 1, b = 2, c = 3 etc.

You need to return the highest scoring word as a string.

If two words score the same, return the word that appears earliest in the original string.

All letters will be lowercase and all inputs will be valid.

*/


/*
** @param str: a C-string containing only lowercase letters and spaces (' ')
** @return:    a C-string allocated on the heap containing the highest scoring word of str
*/
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int get_score(const char* str)
{
	int score = 0;

	while (*str)
		score += *str++ - 'a' + 1;

	return score;
}

char* highestScoringWord(const char* str)
{
	char* s = calloc(strlen(str) * 4, 1);

	if (!s)
		return NULL;
	
	strcpy(s, str);
	char* maxstr = NULL;
	int max = 0;
	
	for (char* ptr = strtok(s, " "); ptr != NULL; ptr = strtok(NULL, " "))
	{
		int score = get_score(ptr);
		if (score > max)
		{
			max = score;
			maxstr = ptr;
		}
	}

	if (!maxstr)
		return NULL;

	char* result = calloc(strlen(maxstr) + 1, sizeof(char));
	if (!result)
		return NULL;
	strcpy(result, maxstr);
  
	free(s);
	
	return result;
}
