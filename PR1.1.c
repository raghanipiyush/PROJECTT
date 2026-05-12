#include <stdio.h>

int main()
{

    float c , f;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (9.0 / 5.0 * c) + 32;
      printf("Temperature in Fahrenheit = %.1f", f);
}
    

/*output
Enter temperature in Celsius: 38
Temperature in Fahrenheit = 100.4
*/