#include <stdio.h>

/* print Fahrenheit to Celsius table
 * for Fahrenheit 0, 20, ..., 300 */
int main() 
{

    printf(" F \t   C   \n");

    int fahr;

    for (fahr = 0; fahr < 300; fahr = fahr + 20) {
        printf("%3.0f\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }
}
