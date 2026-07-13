#include <stdio.h>

int main()
{
    int i, j, n = 5;

    for(i = 1; i <= n; i++)
    {


          for(int j=1;j<=n-i;j++){
         
         printf(" ");

        }

        if(i == 1)
        {
            printf("5");
        }
        else if(i == 2)
        {
            printf("454");
        }
        else if(i == 3)
        {
            printf("34543");
        }
        else if(i == 4)
        {
            printf("3345432");
        }
        else if(i == 5)
        {
            printf("123454321");
        }

        printf("\n");
    }

    return 0;
}