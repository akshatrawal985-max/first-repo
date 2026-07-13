#include <stdio.h>

int main() {
    char ch = 'a';

    printf("Output: ");
    do {
        printf("%c", ch);
        
        ch = ch + 4; // Skip 3 alphabets (a + 4 = e)
        
        if (ch <= 'z') {
            printf(", ");
        }
    } while (ch <= 'z');

    return 0;
}
