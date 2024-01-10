#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three integers
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the minimum
    int min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }

    // Output the minimum
    printf("The minimum number is: %d\n", min);

    return 0;
}

