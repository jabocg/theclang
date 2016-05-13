#include <stdio.h>

/* trim white space("  " turns into " ") */

int main() 
{
    int c;
    int lc;

    while ((c = getchar()) != EOF) {
        if (lc != ' ' || c != ' ') {
            putchar(c);
        }
        lc = c;
    }
}
