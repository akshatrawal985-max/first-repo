
#include <stdio.h>

int main()
{

    int num1, num2, result;
    char choice;

    printf("Press 1 for + :\n");
    printf("Press 2 for - :\n");
    printf("Press 3 for * :\n");
    printf("Press 4 for / :\n");
    printf("Press 5 for % :\n");
    printf("Press 0 for Exit :\n");

    scanf("%s", &choice);
    if (choice == '0')
    {
        printf("Exit");
        return 0;
    }
    printf("Enter first number :");
    scanf("%d", &num1);
    printf("Enter second number :");
    scanf("%d", &num2);

    switch (choice)
    {

    case '+':

        result = num1 + num2;
        printf("Addition is = %d", result);
        break;

    case '-':

        result = num1 - num2;
        printf("Substractin is = %d", result);
        break;

    case '*':

        result = num1 * num2;
        printf("Multiplication is = %d", result);
        break;

    case '/':

        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Divide is = %d", result);
        }
        else
        {
            printf("not divisable by zero");
        }

    case '%':

        if (num2 != 0)
        {
            result = num1 % num2;
            printf("Modulo is = %d", result);
        }
        else
        {
            printf("not divisable by zero");
        }

        break;

    default:
        printf("Wrong choice!");
        return 0;
    }
}
