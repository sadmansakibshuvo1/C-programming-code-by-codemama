#include <stdio.h>

int main() {
    int n; // Length of the array
    int count = 0; // Initialize a count to 0

    // Input the length of the array
    //printf("Enter the length of the array: ");
    scanf("%d", &n);

    // Input the boolean values and count the number of true values
    //printf("Enter the boolean values: ");
    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        if (value == 1) {
            count++;
        }
    }

    // Print the number of true values in the array
    //printf("Number of True values: %d\n", count);
    printf("Number of True values: %d\n", count);

    return 0;
}

