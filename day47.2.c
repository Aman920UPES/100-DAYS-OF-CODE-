#include <stdio.h>

int main()
{
    char str[200];
    int i, start = 0;
    int currentLength = 0;
    int maxLength = 0;
    int maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            if(currentLength == 0)
                start = i;

            currentLength++;
        }
        else
        {
            if(currentLength > maxLength)
            {
                maxLength = currentLength;
                maxStart = start;
            }

            currentLength = 0;

            if(str[i] == '\0')
                break;
        }
    }

    printf("Longest word: ");

    for(i = maxStart; i < maxStart + maxLength; i++)
        printf("%c", str[i]);

    return 0;
}
