#include <stdio.h>

int main() 
{
    double nc = 0;

    for (nc = 0; getchar() != EOF; ++nc)
        ;

    printf("count: %f\n", nc);
}
