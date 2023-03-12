/* Write a program to copy its input to its output, replacing each string of one or more blanks by a
single blank.*/
#include <stdio.h>
int main()
{
    int ns = 0, c;
    while ((c = getchar()) != EOF)
        if (c != ' ')
        {
            putchar(c);
            ns = 0;
        }
        else if (c == ' ' && ns == 0)
        {
            putchar(c);
            ns = 1;
        }

    return 0;
}