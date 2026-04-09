#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, i = 0;
    int decimal = 0;

    printf("Enter a binary number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        decimal += remainder * pow(2, i);
        num = num / 10;
        i++;
    }

    printf("The decimal number is: %d\n", decimal);

    return 0;
}
