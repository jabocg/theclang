#include <stdio.h>

int main() 
{
    double nc = 0;
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nc;
        }
    }

    printf("count: %f\n", nc);
}
