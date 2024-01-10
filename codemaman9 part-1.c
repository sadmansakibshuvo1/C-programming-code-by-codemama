#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];
    printf("");
    scanf("%s", input);

    int len = strlen(input);
    char output[2 * len + 1]; // Twice the length of input + 1 for '\0'
    int outputIndex = 0;

    for (int i = 0; i < len; i++) {
        output[outputIndex++] = input[i];
        if ((i + 1) % 2 == 0 && i < len - 1) {
            output[outputIndex++] = 'x';
        }
    }

    output[outputIndex] = '\0';

    printf("%s\n", output);

    return 0;
}
