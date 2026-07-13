#include <stdio.h>

int main()
{
    int arr[3][3] = {{2,7,1},{3,5,4},{8,9,6}};
    int row, col;
    int i, sum = 0;

    printf("Enter row number: ");
    scanf("%d", &row);

    printf("Elements of row %d: ", row);

    for(i = 0; i < 3; i++)
    {
        printf("%d ", arr[row][i]);
        sum += arr[row][i];
    }

    printf("\nThe sum of row %d: %d\n", row, sum);

    sum = 0;

    printf("\nEnter column number: ");
    scanf("%d", &col);

    printf("Elements of column %d: ", col);

    for(i = 0; i < 3; i++)
    {
        printf("%d ", arr[i][col]);
        sum += arr[i][col];
    }

    printf("\nThe sum of column %d: %d\n", col, sum);

    return 0;
}