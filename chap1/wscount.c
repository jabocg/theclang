#include <stdio.h>

/* count whitespace(space, tab, newline) */

int main() 
{
    long nlc = 0;
    long tc = 0;
    long sc = 0;
    int c = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' ) {
            ++sc;
        } else if (c == '\t') {
            ++tc;
        } else if (c == '\n') {
            ++nlc;
        }
    }

    printf("spaces:  %d\ntabs:  %d\nnewlines:  %d\n", sc, tc, nlc);
}
