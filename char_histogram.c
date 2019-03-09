#include <stdio.h>

// print a histogram of the frequency of different characters in input

#define STD_ASCII 93 // 93 standard ascii characters

int main()
{
    int c, i, j;
    char characters[STD_ASCII];
    int frequency[STD_ASCII];

    for (i = 0; i < STD_ASCII; ++i)
    {
        characters[i] = (33 + i);
        frequency[i] = 0;
    }

    while ((c = getchar()) != EOF)
        if (c == ' ' || c == '\t' || c == '\n')
            ;
        else
            ++frequency[(c - 33)];
     
    for (i = 0; i < STD_ASCII; ++i) // move down through ascii table
    {
        if (frequency[i] > 0)
        {
            printf(" %c ", characters[i]);
            for (j = 0; j < frequency[i]; ++j)
                printf("*");
            printf("\n");
        }
    }
        
}