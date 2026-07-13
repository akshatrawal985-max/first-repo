#include <stdio.h>

int main()
{
    int i, j;

    for(i = 5; i >= 1; i--)
    {
        
        for(j = 1; j <= (5 - i) * 3; j++)
        {
            printf(" ");
        }

        
        for(j = i; j >= 1; j--)
        {
            printf("%d", j % 2);
        }

        printf("\n");
    }

    return 0;
}