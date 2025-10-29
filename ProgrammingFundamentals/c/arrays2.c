/* Write a program to print a histogram of the lengths of words in its input. It is easy to draw the
histogram with the bars horizontal; a vertical orientation is more challenging.
TRY: a vertical orientation
01235478888888|
Histogram: 
 0  1  2  3  4  5  6  7  8  9
                         #
                         #
                         #
                         #
                         #
                         #
 #  #  #  #  #  #     #  #
*/

#include <stdio.h>
int main(void)
{

    int countdigits[10], c, max = 0;
    for (int i = 0; i < 10; ++i)
        countdigits[i] = 0;

    while ((c = getchar()) != '|')
    {
        if (c >= '0' && c <= '9')
        {
            ++countdigits[c - '0'];
        }
    }

    printf("Histogram: \n");
    for (int i = 0; i < 10; ++i)
    {
        printf(" %d ", i);
        max = ((countdigits[i] > max) ? countdigits[i] : max);
    }
    printf("\n");
    while (max > 0)
    {
        for (int i = 0; i < 10; ++i)
        {
            if (countdigits[i] == max)
            {
                --countdigits[i];
                printf(" # ");
            }
            else
                printf("   ");
        }
        printf("\n");
        --max;
    }

    return 0;
}