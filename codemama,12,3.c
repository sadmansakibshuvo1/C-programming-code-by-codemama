#include <stdio.h>

int main() {
    // Declare variables to store input values
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);

    // Calculate the total time needed to complete both assignments
    int total_time = A + B;

    // Check if there is enough time to complete both assignments
    if (total_time <= N) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

