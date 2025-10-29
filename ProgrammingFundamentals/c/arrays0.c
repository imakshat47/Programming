/* count digits, white space, others
write a program to count the number of occurrences of each digit, of white space characters (blank, tab,
newline), and of all other characters
*/
#include <stdio.h>
int main(void)
{
    int countdigits[10], countspace = 0, countother = 0, c;

    for (int i = 0; i < 10; i++)
        countdigits[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
            ++countdigits[c - '0'];
        else if (c == ' ' || c == '\t')
            ++countspace;
        else
            ++countother;
    }

    printf("Output: ");
    for (int i = 0; i < 10; ++i)
        printf(" [%d => %d] ", i, countdigits[i]);

    printf("\n %d %d", countspace, countother);

    getchar();

    return 0;
}