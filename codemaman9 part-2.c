#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[1000];
    printf("");
    scanf("%s", input);

    int len = strlen(input);

    for (int i = 0; i < len; i++) {
        if (i % 3 == 2 && isalpha(input[i])) {
            input[i] = toupper(input[i]);
        }
    }

    printf("%s\n", input);

    return 0;
}
