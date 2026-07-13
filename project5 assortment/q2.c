#include <stdio.h>

int main() {
    int a[3][3] = {
        {2, 7, 1},
        {3, 5, 4},
        {8, 9, 6}
    };
    
    int max = a[0][0];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] > max)
                max = a[i][j];
        }
    }
    
    printf("Largest number: %d\n", max);
    
    return 0;
}