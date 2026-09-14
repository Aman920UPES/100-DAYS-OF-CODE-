#include <stdio.h>

int main()
{
    int n, i;
    int numerator = 2, denominator = 3;
    float sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + (float)numerator / denominator;

        numerator = numerator + 2;
        denominator = denominator + 4;
    }

    printf("Sum of series = %.2f\n", sum);

    return 0;
}
