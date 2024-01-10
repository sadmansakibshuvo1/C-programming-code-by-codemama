#include <stdio.h>

int main() {
    int num1, num2;

    // Input two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Calculate the difference
    int difference = num1 - num2;

    // Output the difference
    printf("The difference between the two numbers is: %d\n", difference);

    return 0;
}

