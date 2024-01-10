#include <stdio.h>

int main() {
    int num1, num2;

    // Input two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Calculate the quotient using integer division
    int quotient = num1 / num2;

    // Output the quotient
    printf("The quotient of %d divided by %d is: %d\n", num1, num2, quotient);

    return 0;
}

