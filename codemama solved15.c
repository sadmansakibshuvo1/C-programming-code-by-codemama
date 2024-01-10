#include <stdio.h>
#define PI 3.14

int main() {
    float radius, area;

    // Input the radius
    scanf("%f", &radius);

    // Calculate the area of circle
    area = PI * radius * radius;

    // Output the area
    printf("The area of the circle is %.2f square units.", area);

    return 0;
}

