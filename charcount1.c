/* count characters in input; 2nd version for loop, double nc */

#include <stdio.h>

int main()
{

    double nc;

    for (nc = 0; getchar() != EOF; nc++)
        ;

    printf("%0.f", nc);

    return 0;
}