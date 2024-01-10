#include <stdio.h>

int main() {
    int count = 0;
    char input[10][50];  // Array to store 10 strings, each of up to 50 characters

    // Read 10 strings from the input
    for (int i = 0; i < 10; i++) {
        printf("");
        scanf("%s", input[i]);
    }

    // Check each string for the character 'T'
    for (int i = 0; i < 10; i++) {
        for (int j = 0; input[i][j] != '\0'; j++) {
            if (input[i][j] == 'T') {
                count++;
                break;  // No need to check further for 'T' in this string
            }
        }
    }

    // Print the count of strings containing 'T'
    printf("%d\n", count);

    return 0;
}
