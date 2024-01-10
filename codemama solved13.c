#include <stdio.h>

int main() {
    double mainSalary;
    int bonus;

    // Input the main salary
    printf("Enter the main salary: ");
    scanf("%lf", &mainSalary);

    // Calculate the bonus (10% of main salary)
    bonus = (int)(0.10 * mainSalary);

    // Output the bonus
    printf("The bonus is: %d\n", bonus);

    return 0;
}

