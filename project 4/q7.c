#include <stdio.h>

int main()
{
    int i, j, n = 6;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            if(i == 1 || i == 4)          
                printf("* ");
            else if(j == 1)              
                printf("* ");
            else if(i == 3 && j == 5)    
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}