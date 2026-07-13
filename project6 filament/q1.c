#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool checkpalindrome(char str[]){

    int l = strlen(str);
    int right = l-1;
    int left = 0;

    while(left < right){

        if(str[left] != str[right]){
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main(){

    char str[] = "racecar";

    if(checkpalindrome(str)){
        printf("It is palindrome ");
    }
    else{
        printf("It is not palindrome ");
    }
    return 0;
}

