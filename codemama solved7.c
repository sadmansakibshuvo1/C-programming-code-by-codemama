#include <stdio.h>

int main() {
    int num1, num2;

    // Input two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Calculate the remainder using the modulo operation
    int remainder = num1 % num2;

    // Output the remainder
    printf("The remainder of %d divided by %d is: %d\n", num1, num2, remainder);

    return 0;
}

