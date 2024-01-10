#include <stdio.h>

int main() {
    float num1, num2, num3;

    // Input
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Calculating the average
    float average = (num1 + num2 + num3) / 3.0;

    // Output
    printf("Average: %.2f\n", average);

    return 0;
}

