#include <stdio.h>
#include <stdlib.h>
#include "caesar.h"

int main(int argc, char** args)
{
	bool useDictionary = false;
	char* dictionary;

	if (argc < 2)
	{
		printf("caesar: Error, please specify k: caesar [K]\n", stderr);
		return 1;
	}
	if (argc == 3)
	{
		useDictionary = true;
		dictionary = args[2];
	}

	char* endptr;
	int k = strtol(args[1], &endptr, 10);

	if (*endptr != '\0') 
	{
		printf("caesar: Error, invalid number for k\n", stderr);
		return 2;
	}
	
	int ch;
	while ( (ch=getchar()) != EOF ) 
	{
	if (useDictionary)
		{
			printf("%c", caesarDict(ch, k, cleanDict(dictionary)));
		} else
		{
			printf("%c", caesar(ch, k));
		}
	}

	return 0;	
}
