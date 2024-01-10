#include <stdio.h>

int main() {
    int length, width;

    // Input length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    // Calculate the area of the rectangle
    int area = length * width;

    // Output the area
    printf("The area of the rectangle is: %d\n", area);

    return 0;
}

