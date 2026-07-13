#include <stdio.h>

int main() {
    int a[] = {2, -4, 1, -3, -5};
    int n = 5;
    
    printf("Negative elements: ");
    for (int i = 0; i < n; i++) {
        if (a[i] < 0)
            printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}