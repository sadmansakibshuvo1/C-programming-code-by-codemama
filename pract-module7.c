#include <stdio.h>

int main() {
    int fruitId;

    //fruit ID from input
    scanf("%d", &fruitId);

    // Initialize a string to store the fruit name
    char *fruitName;

    // Map fruit IDs to their names using a switch statement
    switch (fruitId) {
        case 31231:
            fruitName = "Banana";
            break;
        case 43861:
            fruitName = "Elderberry";
            break;
        case 82678:
            fruitName = "HoneydewMelon";
            break;
        case 23456:
            fruitName = "Apple";
            break;
        case 78901:
            fruitName = "Mango";
            break;
        case 98765:
            fruitName = "Nectarine";
            break;
        case 45678:
            fruitName = "Orange";
            break;
        case 67890:
            fruitName = "Raspberry";
            break;
        case 21098:
            fruitName = "Tangerine";
            break;
        default:
            printf("Invalid fruit ID\n");
            return 1; // Exit with error code
    }

    // Output the fruit name
    printf("%s\n", fruitName);

    return 0;
}

