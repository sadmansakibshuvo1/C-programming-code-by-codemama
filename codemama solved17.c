#include <stdio.h>

int main() {
    int number;

    // Input the number
    scanf("%d", &number);

    // Check and output the type of number
    if (number > 0) {
        printf("%d is a positive number.\n", number);
    } else if (number < 0) {
        printf("%d is a negative number.\n", number);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
