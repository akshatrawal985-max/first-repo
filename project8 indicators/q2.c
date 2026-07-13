#include <stdio.h>
#include <string.h>

int main(){
    
    char str[] = "Hello World";
    char *ptr = str;
    int length=0;
    
    while(*ptr != '\0'){
        ptr++;
        length++;
    }
    
    printf("The length of sring is = %d",length);
    
    return 0;
    
}