#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;

    // Input the coordinates of the first point
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    // Input the coordinates of the second point
    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Calculate the distance using the distance formula
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // Output the distance
    printf("The distance between the two points is: %.2lf\n", distance);

    return 0;
}

