#include <stdio.h>

int main() {
    // Declare variables to store input values
    int weight, sugar, calories;

    // Read input values
    scanf("%d %d %d", &weight, &sugar, &calories);

    // Check conditions and print output
    if (weight >= 200 && weight <= 300 && sugar >= 50 && calories >= 150) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

