#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX 10

/* make a pretty bar graph(histogram) of word lengths */

int main() 
{
    int c;
    int len = 0;
    int state = OUT;

    int cc[MAX];

    for (int i = 0; i < MAX; ++i) {
        cc[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (len != 0 && len < MAX) {
                ++cc[len-1];
            }
            state = OUT;
            len = 0;
        } else if (state == IN) {
            ++len;
        } else {
            state = IN;
            len = 1;
        }

    }

    printf("synopsis\n");

    for (int i = 0; i < MAX; ++i) {
        printf("%d:",i+1);
        for (int j = 0; j < cc[i]; ++j) {
            putchar('|');
        }
        putchar('\n');
    }
}
