#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

int main () {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    
    printf("Fah   Cels\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5*(fahr-32)/9;
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
