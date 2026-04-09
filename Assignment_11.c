#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, isPrime = 1;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 0)
        printf("\nSquare root = %.2f", sqrt(n));
    else
        printf("\nSquare root not possible for negative numbers");

    printf("\nSquare = %d", n * n);

    printf("\nCube = %d", n * n * n);

    if (n <= 1)
        isPrime = 0;
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("\nThe number is Prime");
    else
        printf("\nThe number is Not Prime");

    if (n < 0)
        printf("\nFactorial not defined for negative numbers");
    else
    {
        for (i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }
        printf("\nFactorial = %lld", factorial);
    }

    printf("\nPrime factors: ");
    if (n <= 1)
    {
        printf("Not possible");
    }
    else
    {
        int num = n;
        for (i = 2; i <= num; i++)
        {
            while (num % i == 0)
            {
                printf("%d ", i);
                num = num / i;
            }
        }
    }

    return 0;
}