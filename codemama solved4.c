#include <stdio.h>

int main() {
    int base, height;

    // Input the base and height of the triangle
    printf("Enter the base of the triangle: ");
    scanf("%d", &base);

    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    // Calculate the area of the triangle
    int area = (base * height) / 2;

    // Output the area
    printf("The area of the triangle is: %d\n", area);

    return 0;
}

