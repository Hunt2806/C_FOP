#include <stdio.h>











void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function - After swap: a = %d, b = %d\n", a, b);
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2, choice;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("\n===== Swap Menu =====\n");
    printf("1. Swap using Pass-by-Value\n");
    printf("2. Swap using Reference Pointer\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    printf("\nBefore swap: num1 = %d, num2 = %d\n", num1, num2);
    
    switch(choice) {
        case 1:
            printf("\n--- Swapping via Pass-by-Value ---\n");
            swapByValue(num1, num2);
            printf("Back in main - num1 = %d, num2 = %d (unchanged)\n", num1, num2);
            printf("Note: Values are NOT swapped because changes are LOCAL to function\n");
            break;
            
        case 2:
            printf("\n--- Swapping via Reference Pointer ---\n");
            swapByReference(&num1, &num2);
            printf("After swap: num1 = %d, num2 = %d (actual swap)\n", num1, num2);
            printf("Note: Values ARE swapped because we pass ADDRESSES\n");
            break;
            
        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
            return 1;
    }
    
    return 0;
}