#include <stdio.h>

int i,j;
int num = 11;

int main(){

    for(i=1;i<=4;i++){

        for(j=1;j<=i;j++){
            printf("%d ",num);
            num ++;


        }
        printf("\n");
    }
    return 0;
}