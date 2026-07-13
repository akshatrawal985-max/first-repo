#include <stdio.h>

int cube(int *p){
    return (*p) * (*p) * (*p);
}

int main(){
    
        int arr[3][3] = {
        {3, 2, 5},
        {4, 0, 0},
        {0, 0, 0}
    };
    int i,j;
    

    
    for(i=0;i<3;i++){
        
        for(j=0;j<3;j++){
            printf("Cube of all element %d\n",cube(&arr[i][j]));
        }
        printf("\n");
    }
    return 0;
}