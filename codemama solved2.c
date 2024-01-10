#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    // Input the user's name
    printf("Enter your name: ");
    scanf("%s", name);

    // Print personalized greeting
    printf("Hello, %s! Welcome to the program.\n", name);

    return 0;
}

