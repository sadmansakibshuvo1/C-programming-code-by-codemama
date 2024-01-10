#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool containsVowel(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = toupper(str[i]);
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            return true;
        }
    }
    return false;
}

int main() {
    char input[50];
    fgets(input, sizeof(input), stdin);


    input[strcspn(input, "\n")] = '\0';

    if (containsVowel(input)) {
        printf("The string contains a vowel.\n");
    } else {
        printf("The string does not contain any vowel.\n");
    }

    return 0;
}

