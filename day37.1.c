#include <stdio.h>

int main()
{
    int a[10][10];
    int rowSum[10];
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter the matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Find sum of each row
    for(i = 0; i < rows; i++)
    {
        rowSum[i] = 0;

        for(j = 0; j < cols; j++)
        {
            rowSum[i] = rowSum[i] + a[i][j];
        }
    }

    printf("Sum of each row:\n");

    for(i = 0; i < rows; i++)
    {
        printf("Row %d = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
