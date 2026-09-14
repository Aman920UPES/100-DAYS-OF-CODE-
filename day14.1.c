#include <stdio.h>

int main()
{
    int n, i, odd, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    odd = 1;

    for (i = 1; i <= n; i++)
    {
        sum = sum + odd;
        odd = odd + 2;
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
