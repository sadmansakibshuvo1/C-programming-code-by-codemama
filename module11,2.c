#include <stdio.h>

// Function to calculate the final price after discount
float calculateDiscountedPrice(int originalPrice, int discount) {
    float discountAmount = (originalPrice * discount) / 100.0;
    float finalPrice = originalPrice - discountAmount;
    return finalPrice;
}

int main() {
    int originalPrice, discount;

    // Input the original price and discount percentage
    //printf("Enter numbers: ");
    scanf("%d %d", &originalPrice, &discount);

    // Calculate the final price after discount
    float finalPrice = calculateDiscountedPrice(originalPrice, discount);

    // Print the final price rounded to two decimal places
    printf("Price: %.2f\n", finalPrice);

    return 0;
}

