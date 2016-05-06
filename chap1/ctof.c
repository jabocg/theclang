#include <stdio.h>

/* print Celsius to Fahrenheit  table
 * for Fahrenheit 0, 20, ..., 300 */
int main() 
{
    float fahr;
    float cel;
    int lower;
    int upper;
    int step;

    lower = 0; /* lower bound for the table */
    upper = 150; /* upper bound for the table */
    step = 10; /* amount to step by */

    printf(" C \t");
    printf("   F   \n");
    cel = lower;
    while (cel <= upper) {
        fahr = (9.0 / 5.0 * cel) + 32.0;
        /* cel = (5.0 / 9.0) * (fahr - 32.0); */
        printf("%6.0f\t%3.1f\n", cel, fahr);
        cel += step;
    }
}
