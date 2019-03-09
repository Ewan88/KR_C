#include <stdio.h>

// copies an infile to an outfile

int main()
{
	int c;
	
	while ((c = getchar()) != EOF)
		putchar(c);
}