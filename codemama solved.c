#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input the temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output the temperature in Fahrenheit
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}

