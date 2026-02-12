#include <stdio.h>

int main() {
    int num, a, original, e=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num!=0) {
        a = num % 10;
        e = (e + a*a*a);
        num = num/10;
    }
    if (e == original)
        printf("%d is an Armstrong number", original);
    else
        printf("%d is not an Armstrong number", original);
    
    return 0;
}
