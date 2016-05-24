#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* print words on a new line */

int main()
{
    int state = OUT;
    int c = 0;
    int nl = 0;
    int nw = 0;
    int nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;

        if (c == '\n') {
            ++nl;
        }

        if (c == '\n' || c == '\t' || c == ' ') {
            if (state == IN) {
                putchar('\n');
            }
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
            putchar(c);
        } else {
            putchar(c);
        }
    }

    printf("c:  %d\nw:  %d\nl:  %d\n", nc, nw, nl);
    
}
