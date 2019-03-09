#include <stdio.h>

// print input one word per line

#define IN 1 // inside word
#define OUT 0 // outside word

int main()
{
	int c;
	
	while (( c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
			putchar('\n');
		else
			putchar(c);
	}
}
	
