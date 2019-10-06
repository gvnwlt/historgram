#include <stdio.h>

#define IN 1 
#define OUT 0  

/* This program will demonstrate a histogram 
	for the lenghts of words that are inputted. */ 

int c, nword, nchar, state, i; 

nword = 0; 
state = OUT;

main()
{

	printf("LENGTH OF WORDS HISTOGRAM\n\n"); 

	while ((c = getchar()) != EOF)
	{
		if ( c == '\n' || c == ' ' || c == 't')
		{
			if (state == IN) {
				++nword;
			}
			state = OUT; 
		}
		else if (state == IN)
		{
			++nchar; 
		}
		else if (state == OUT)
		{
			state = IN; 
			++nchar;
		}
	}

	printf("nwords:\t");
	for (i = 0; i < nword; ++i)
	{
		printf("*");
	} 
	printf("\n");

	printf("nchar:\t"); 
	for (i = 0; i < nchar; ++i)
	{
		printf("$");
	}
	printf("\n");
}