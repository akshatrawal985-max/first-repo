#include <stdio.h>

int first_angle,second_angle,third_angle;

int main(){
    printf("Enter First angle:");
    scanf("%d",&first_angle);
    printf("Enter Second angle:");
    scanf("%d",&second_angle);
   

    third_angle = 180 - (first_angle + second_angle);


    printf("Third angle = %d\n",third_angle);
    return 0;
}