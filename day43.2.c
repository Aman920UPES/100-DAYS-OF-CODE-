#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0;
    int palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome == 1)
        printf("String is a palindrome.");
    else
        printf("String is not a palindrome.");

    return 0;
}
