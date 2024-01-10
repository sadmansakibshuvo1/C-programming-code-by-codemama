#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Structure to represent a stack
struct Stack {
    int top;
    char items[MAX_SIZE];
};

// Function to initialize the stack
void initialize(struct Stack* stack) {
    stack->top = -1;
}

// Function to push an element onto the stack
void push(struct Stack* stack, char item) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->items[++stack->top] = item;
}

// Function to pop an element from the stack
char pop(struct Stack* stack) {
    if (stack->top == -1) {
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack->items[stack->top--];
}

// Function to check if brackets are balanced
int areBracketsBalanced(char* str) {
    struct Stack stack;
    initialize(&stack);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            push(&stack, str[i]);
        } else if (str[i] == ')' || str[i] == '}' || str[i] == ']') {
            if (stack.top == -1 ||
                (str[i] == ')' && stack.items[stack.top] != '(') ||
                (str[i] == '}' && stack.items[stack.top] != '{') ||
                (str[i] == ']' && stack.items[stack.top] != '[')) {
                return 0; // Brackets are not balanced
            } else {
                pop(&stack);
            }
        }
    }

    return (stack.top == -1) ? 1 : 0; // If stack is empty, brackets are balanced
}

int main() {
    char str[MAX_SIZE];

    // Input
    printf("");
    fgets(str, sizeof(str), stdin);

    // Check if brackets are balanced
    if (areBracketsBalanced(str)) {
        printf("Brackets are balanced.\n");
    } else {
        printf("Brackets are not balanced.\n");
    }

    return 0;
}

