/* count lines, words, and characters in input */
#include <stdio.h>
#define IN 0
#define OUT 1
int main()
{
    int nl, nw, nc, c, state;
    nl = nw = nc = 0;
    state = OUT;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d", nl, nw, nc);
    return 0;
}