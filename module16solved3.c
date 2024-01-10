#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 100

// Structure to represent a stack
struct Stack {
    int top;
    int items[MAX_SIZE];
};

// Function to initialize the stack
void initialize(struct Stack* stack) {
    stack->top = -1;
}

// Function to push an element onto the stack
void push(struct Stack* stack, int item) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->items[++stack->top] = item;
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (stack->top == -1) {
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack->items[stack->top--];
}

// Function to evaluate a prefix expression
int evaluatePrefix(char* expression) {
    struct Stack stack;
    initialize(&stack);

    // Find the length of the expression
    int length = 0;
    while (expression[length] != '\0') {
        length++;
    }

    // Start from the end of the expression
    for (int i = length - 1; i >= 0; i--) {
        if (isdigit(expression[i])) {
            push(&stack, expression[i] - '0');
        } else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            int operand1 = pop(&stack);
            int operand2 = pop(&stack);

            switch (expression[i]) {
                case '+':
                    push(&stack, operand1 + operand2);
                    break;
                case '-':
                    push(&stack, operand1 - operand2);
                    break;
                case '*':
                    push(&stack, operand1 * operand2);
                    break;
                case '/':
                    if (operand2 != 0) {
                        push(&stack, operand1 / operand2);
                    } else {
                        printf("Error: Division by zero\n");
                        exit(EXIT_FAILURE);
                    }
                    break;
                default:
                    printf("Error: Invalid character in expression\n");
                    exit(EXIT_FAILURE);
            }
        }
    }

    return pop(&stack);
}

int main() {
    char expression[MAX_SIZE];

    // Input
    printf("");
    fgets(expression, sizeof(expression), stdin);

    // Evaluate prefix expression
    int result = evaluatePrefix(expression);
    printf("%d\n", result);

    return 0;
}

