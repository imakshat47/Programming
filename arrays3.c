/* Write a program to print a histogram of the frequencies of different characters in its input. */

#include <stdio.h>
#define TOTAL_CHAR 127
void printHistogram(int[]);

int main(void)
{

    int countchar[TOTAL_CHAR], c;

    for(int i=0;i<TOTAL_CHAR;i++)
        countchar[i]=0;

    while ((c = getchar()) != '|')
    {
        ++countchar[c];
    }

    printHistogram(countchar);

    return 0;
}

void printHistogram(int countchar[])
{
    printf("Histogram: ");
    for (int i = 0; i < TOTAL_CHAR; i++)
    {
        printf("%c [", i);
        for (int j = 0; j < countchar[i]; ++j)
            printf("#");
        printf("]\n");
    }
}