#include <stdio.h>

/* print Fahrenheit to Celsius table
 * for Fahrenheit 0, 20, ..., 300 */
int main() 
{
    for (int i = 0; i < 300; i += 20) {
        printf("%d\t%f\n", i, (5.0 / 9.0) * (i - 32.0));
    }

}
