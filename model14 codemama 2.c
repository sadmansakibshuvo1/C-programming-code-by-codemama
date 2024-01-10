#include <stdio.h>

int main() {
    int A, B;

    // Input
    printf("");
    scanf("%d %d", &A, &B);

    // Ensure A is less than or equal to B
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    int totalPlants = 0;

    for (int i = A; i <= B; i++) {
        if (i % 2 != 0) { // Check if the number of plants is odd
            totalPlants += i;
        }
    }

    // Output
    printf("%d\n", totalPlants);

    return 0;
}

