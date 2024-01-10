#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output
    printf("The temperature in Fahrenheit is: %.2f\n", fahrenheit);

    return 0;
}

