#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, count;

    printf("Enter how many random numbers: ");
    scanf("%d", &count);

    srand(time(0));

    for (i = 1; i <= count; i++) {
        printf("%d\n", rand());
    }

    return 0;
}
