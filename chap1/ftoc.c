#include <stdio.h>

/* print Fahrenheit to Celsius table
 * for Fahrenheit 0, 20, ..., 300 */
int main() 
{
    float fahr;
    float cel;
    int lower;
    int upper;
    int step;

    lower = 0; /* lower bound for the table */
    upper = 300; /* upper bound for the table */
    step = 20; /* amount to step by */

    fahr = lower;
    while (fahr <= upper) {
        cel = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, cel);
        fahr += step;
    }
}
