#include <stdio.h>

int main() {
    int num1, num2;

    // Input the two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Calculate the sum
    int sum = num1 + num2;

    // Output the sum
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

