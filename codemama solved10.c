#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];

    // Input the string
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Calculate the number of characters
    int length = strlen(inputString);

    // Output the number of characters
    printf("The number of characters in the string is: %d\n", length);

    return 0;
}

