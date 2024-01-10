#include <stdio.h>

int main() {
    // product prices based on product IDs
    int price101 = 10;
    int price202 = 25;
    int price303 = 5;

    int productId, quantity;

    // Read product ID and quantity from input
    scanf("%d %d", &productId, &quantity);

    int totalCost = 0;

    // Calculate the total cost based on the provided list
    switch (productId) {
        case 101:
            totalCost = price101 * quantity;
            break;
        case 202:
            totalCost = price202 * quantity;
            break;
        case 303:
            totalCost = price303 * quantity;
            break;
        default:
            printf("Invalid product ID\n");
            return 1; // Exit with an error code
    }

    // Output the total cost
    printf("%d\n", totalCost);

    return 0;
}
