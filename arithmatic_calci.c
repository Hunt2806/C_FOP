#include <stdio.h>

int main() {
    int a, b,ch;
    

    scanf("%d", &a);
    scanf("%d", &b);

    printf("\n -------Menu-------");
    printf("\n Addition (1) \n");
    printf(" Subtraction (2) \n");
    printf(" Multiplication (3) \n");

    printf("Enter your choice");
    scanf(" %d", &ch);

    switch (ch)
    {
    case 1:
        printf("Result = %d", a+b);
        break;
    case 2:
        printf("Result = %d", a-b);
        break;
    case 3:
        printf("Result = %d", a*b);
        break;           
    default:
        printf("Invalid Choice");
    }
     return 0;
}