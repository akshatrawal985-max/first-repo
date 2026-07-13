#include <stdio.h>

int main()
{
    int a[3][3] = {
        {2, 4, 1},
        {3, 5, 4},
        {8, 2, 6}
    };

    int i, j;

    printf("Transpose Matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}