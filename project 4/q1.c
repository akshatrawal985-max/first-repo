#include <stdio.h>

int i,j;

int main(){

    for(i=41;i<=45;i++){

        for(j=41;j<=i;j++){

            printf("%d ",j);

        }
        printf("\n");
    }
    return 0;
}