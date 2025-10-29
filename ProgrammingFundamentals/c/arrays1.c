/* Write a program to print a histogram of the lengths of words in its input. It is easy to draw the
histogram with the bars horizontal; a vertical orientation is more challenging.*/

#include <stdio.h>
int main(void)
{
    int countdigits[10], c;
    for (int i = 0; i < 10; ++i)
        countdigits[i] = 0;

    while ((c = getchar()) != '|')
    {
        if (c >= '0' && c <= '9')
            ++countdigits[c - '0'];
    }

    printf("Histogram: \n");

    for (int i = 0; i < 10; ++i)
    {
        printf("%d [", i);
        for (int j = 0; j < countdigits[i]; j++)
            printf(" # ");
        printf("]\n");
    }

    return 0;
}