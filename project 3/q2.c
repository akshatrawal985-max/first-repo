#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    // Handle the case if the number is 0
    if (num == 0) {
        count = 1;
    } else {
        // Use a loop to count digits
        while (num != 0) {
            num = num / 10; // Remove the last digit
            count++;
        }
    }

    printf("Total number of digits: %d\n", count);

    return 0;
}
