/* count lines, words, and characters in input */
#include <stdio.h>
int main()
{
    int nl, nw, nc, c;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == ' ')
            ++nw;
        if (c == '\n')
            ++nl;
    }
    printf("%d %d %d", nl, nw, nc);
    return 0;
}

/*
- Wrong logic: words must be count on start, not space after them.
*/