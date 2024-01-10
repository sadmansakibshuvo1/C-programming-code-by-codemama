#include <stdio.h>

int main() {
    // Declare variables to store input values
    int N;
    scanf("%d", &N);

    // Create an array to store the colors of the tiles
    char S[N + 1]; // Add 1 to store the null terminator
    scanf("%s", S);

    // Initialize a variable to count the number of tiles to be removed
    int tilesToRemove = 0;

    // Iterate through the tiles to check for consecutive tiles with the same color
    for (int i = 1; i < N; ++i) {
        if (S[i] == S[i - 1]) {
            // If consecutive tiles have the same color, increment the count
            tilesToRemove++;
        }
    }

    // Print the result
    printf("%d\n", tilesToRemove);

    return 0;
}

