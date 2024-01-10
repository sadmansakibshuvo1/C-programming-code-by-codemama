#include <stdio.h>

int main() {
    int A, B, C;
    char order[4];

    // Input
    scanf("%d %d %d", &A, &B, &C);
    scanf("%s", order);

    int temp;

    for (int i = 0; i < 3; i++) {
        if (order[i] == 'A') {
            temp = A;
            A = B;
            B = temp;
        } else if (order[i] == 'B') {
            temp = B;
            B = C;
            C = temp;
        } else if (order[i] == 'C') {
            temp = C;
            C = A;
            A = temp;
        }
    }

    // Output
    printf("%d %d %d\n", A, B, C);

    return 0;
}
