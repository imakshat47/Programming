/*Write a program to count blanks, tabs, and newlines. */
#include <stdio.h>

int main()
{
    int count = 0, c;
    while ((c = getchar()) != EOF)
        if (c == ' ' || c == '\t' || c == '\n')
            ++count;
    printf("%d", count);
    return 0;
}