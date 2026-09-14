#include <stdio.h>

int main()
{
    int a, b, lcm;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (a > b)
    {
        lcm = a;
    }
    else
    {
        lcm = b;
    }

    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            break;
        }

        lcm++;
    }

    printf("LCM = %d\n", lcm);

    return 0;
}
