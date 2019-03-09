#include <stdio.h>

// print a histogram of the lengths of words in input
// vertical orientation

int main()
{
	int c, i, j, high, line;
	int word[100];
	
	line = high = 0;
	for (i = 0; i < 100; ++i)
		word[i] = 0;
	
	while ((c = getchar()) != EOF)
		if (c == ' ' || c == '\t')
			;
		else if (c == '\n')
			++line;
		else
			++word[line];

	for (i = 0; i < 100; ++i)
		if (word[i] > high)
			high = word[i];

	for (i = 0; i < high; ++i) // for highest word
	{
		for (j = 0; j < line; ++j) // for each line
		{
			// if word on x axis is higher or equal to word on y axis
			if (word[j] >= (high - i))
				printf("* "); // print a block
			else
				printf("  "); // else print a space
		}
		printf("\n");
	}
}