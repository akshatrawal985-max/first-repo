#include <stdio.h>

int i,j,k;

int main(){

    for(i=5;i>=1;i--){

        for(k=0;k<=i;k++){
            printf(" ");
        }

        for(j=i;j<=5;j++){
            printf("%d",j);
        }

        printf("\n");
    }
    return 0;
}