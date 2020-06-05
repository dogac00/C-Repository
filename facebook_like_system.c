/*

You probably know the "like" system from Facebook and other pages. People can "like" blog posts, pictures or other items. We want to create the text that should be displayed next to such an item.

Implement a function likes :: [String] -> String, which must take in input array, containing the names of people who like an item. It must return the display text as shown in the examples:

* return must be an allocated string
* do not mutate input

likes({})
    // should return "no one likes this"

likes({"Peter"})
    // should return "Peter likes this"

likes({"Jacob", "Alex"})
    // should return "Jacob and Alex like this"

likes({"Max","John","Mark"})
    // should return "Max, John and Mark like this"

likes({"Alex", "Jacob", "Mark", "Max"})
    // should return "Alex, Jacob and 2 others like this"
    
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* likes(size_t n, const char* const names[]) {

	if (n == 0)
	{
		char* ret = calloc(strlen("no one likes this") + 1, 1);
		if (!ret) return NULL;
		strcpy(ret, "no one likes this");
		return ret;
	}
	if (n == 1)
	{
		const char* name = names[0];
		char* ret = calloc(strlen(name) + strlen(" likes this") + 1, 1);
		if (!ret) return NULL;
		strcpy(ret, name);
		strcat(ret, " likes this");
		return ret;
	}
	if (n == 2)
	{
		const char* name1 = names[0];
		const char* name2 = names[1];
		char* ret = calloc(strlen(name1) + strlen(" and ") + strlen(name2) + strlen(" like this") + 1, 1);
		if (!ret) return NULL;
		strcpy(ret, name1);
		strcat(ret, " and ");
		strcat(ret, name2);
		strcat(ret, " like this");
		return ret;
	}
	if (n == 3)
	{
		const char* name1 = names[0];
		const char* name2 = names[1];
		const char* name3 = names[2];
		char* ret = calloc(strlen(name1) + strlen(", ") + strlen(name2) + strlen(" and ") 
			+ strlen(name3) + strlen(" like this") + 1, 1);
		if (!ret) return NULL;
		strcpy(ret, name1);
		strcat(ret, ", ");
		strcat(ret, name2);
		strcat(ret, " and ");
		strcat(ret, name3);
		strcat(ret, " like this");
		return ret;
	}
	if (n >= 4)
	{
		const char* name1 = names[0];
		const char* name2 = names[1];
		char* ret = calloc(strlen(name1) + strlen(", ") + strlen(name2) + strlen(" and NNNNNNNN others like this") + 1, 1);
		if (!ret) return NULL;
		strcpy(ret, name1);
		strcat(ret, ", ");
		strcat(ret, name2);
		strcat(ret, " and ");
		const size_t others = n - 2;
		char othersstr[10] = { 0 };
		sprintf(othersstr, "%d", others);
		strcat(ret, othersstr);
		strcat(ret, " others like this");
		return ret;
	}

	return NULL;
}
