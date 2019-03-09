#include <stdio.h>

// print a histogram of the lengths of words in input

int main()
{
	int c, i, j, nl;
	int nword[100];
	
	nl = 0;
	for (i = 0; i < 100; ++i)
		nword[i] = 0;
	
	while ((c = getchar()) != EOF)
		if (c == ' ' || c == '\t')
			;
		else if (c == '\n')
			++nl;
		else
			++nword[nl];
	
	for (i = 0; i < nl; i++)
		if (nword[i] > 0)
		{
			for (j = 0; j < nword[i]; ++j)
				printf("*");
			printf(" %d\n", nword[i]);
		}		
}
