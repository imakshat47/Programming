/* count characters in input; 1st version */

#include <stdio.h>
int main()
{
    int c, count = 0;
    while ((c = getchar()) != EOF)
        ++count;
    printf("%d", count);
    return 0;
}