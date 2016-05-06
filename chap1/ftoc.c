#include <stdio.h>

/* print Fahrenheit to Celsius table
 * for Fahrenheit 0, 20, ..., 300 */
int main() 
{
    int fahr;
    int cel;
    int lower;
    int upper;
    int step;

    lower = 0; /* lower bound for the table */
    upper = 300; /* upper bound for the table */
    step = 20; /* amount to step by */

    fahr = lower;
    while (fahr <= upper) {
        cel = 5 * (fahr - 32) / 9;
        printf("%3d\t%6d\n", fahr, cel);
        fahr += step;
    }
}
