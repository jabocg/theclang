#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

/* print Fahrenheit to Celsius table
 * for Fahrenheit 0, 20, ..., 300 */
int main() 
{
    printf(" F \t   C   \n");
    for (int i = UPPER; i > LOWER; i -= STEP) {
        printf("%3d\t%6.1f\n", i, (5.0 / 9.0) * (i - 32.0));
    }

}
