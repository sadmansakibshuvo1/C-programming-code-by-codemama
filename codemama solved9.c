#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];
    int hasVowel = 0;  // Flag to indicate if a vowel is found

    // Input the string
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Check for vowels in the string
    for (int i = 0; i < strlen(inputString); i++) {
        if (inputString[i] == 'a' || inputString[i] == 'e' || inputString[i] == 'i' ||
            inputString[i] == 'o' || inputString[i] == 'u' || inputString[i] == 'A' ||
            inputString[i] == 'E' || inputString[i] == 'I' || inputString[i] == 'O' ||
            inputString[i] == 'U') {
            hasVowel = 1;
            break;  // Terminate the loop if a vowel is found
        }
    }

    // Output the result
    if (hasVowel) {
        printf("The string contains a vowel.\n");
    } else {
        printf("The string does not contain any vowel.\n");
    }

    return 0;
}

