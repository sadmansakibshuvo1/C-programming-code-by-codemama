#include <stdio.h>

int main() {
    // Declare variables
    int numbers[6];
    int count = 0;

    // Read six numbers from the user
    printf("");
    scanf("%d %d %d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4], &numbers[5]);

    // Check each number and count the even ones
    for (int i = 0; i < 6; i++) {
        if (numbers[i] % 2 == 0) {
            count++;
        }
    }

    // Print the result
    printf("%d\n", count);

    return 0;
}

