#include <stdio.h>

float fahr_to_celc(float fahr){
  return (5.0 / 9.0) * (fahr - 32.0);
}


int main(void)
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    printf("Fahrenheit to Celsius Conversion \n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = fahr_to_celc(fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}


