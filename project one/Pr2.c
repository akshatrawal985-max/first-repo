#include <stdio.h>
#include <conio.h>

float base_salary,har_percentage,da_percentage,ta_percentage;
float hra,da,ta,gross;

int main(){
    printf("Enter base salary:");
    scanf("%f",&base_salary);
    printf("Enter HRA Percentage:");
    scanf("%f",&har_percentage);
    printf("Enter DA Percentage:");
    scanf("%f",&da_percentage);
    printf("Enter TA Percentage:");
    scanf("%f",&ta_percentage);

    hra = (har_percentage/100) * base_salary;
    da = (da_percentage/100) * base_salary;
    ta = (ta_percentage/100) * base_salary;

    gross = base_salary + hra + da + ta;

    printf("Gross salary = %.2f",gross);

    return 0;
}