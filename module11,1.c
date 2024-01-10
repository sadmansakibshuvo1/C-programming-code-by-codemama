#include <stdio.h>

int main() {
    int wheels, car_bodies, figures;

    // Input the number of wheels, car bodies, and figures
   // printf("Enter numbers: ");
    scanf("%d %d %d", &wheels, &car_bodies, &figures);

    // Calculate the maximum number of complete toy cars
    int cars = 0;
    while (wheels >= 4 && car_bodies >= 1 && figures >= 2) {
        cars++;
        wheels -= 4;
        car_bodies -= 1;
        figures -= 2;
    }

    // Print the number of complete toy cars
    printf("%d\n", cars);

    return 0;
}

