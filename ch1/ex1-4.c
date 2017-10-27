#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

int main () {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 100; 
    step = 5;

    celsius = lower;
    while (celsius<= upper) {
        fahr = celsius*9/5+32; 
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
