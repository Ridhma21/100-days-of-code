//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>

enum Menu {ADD = 1, SUBTRACT, MULTIPLY};

int main() {
    int choice, a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Menu:\n1. ADD\n2. SUBTRACT\n3. MULTIPLY\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case ADD: printf("Result: %d\n", a + b); break;
        case SUBTRACT: printf("Result: %d\n", a - b); break;
        case MULTIPLY: printf("Result: %d\n", a * b); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
