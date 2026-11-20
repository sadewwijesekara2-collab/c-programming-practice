#include <stdio.h>

int main(){
    
    int N;
    int space_count=0;

    printf("Enter the Number of Rows: ");
    scanf("%d", &N);

    
    for(int rows=N; rows>0; rows--){
        for(int spaces=space_count; spaces>0; spaces--){
            printf(" ");
        }
        if((space_count==(N-1))||(space_count==0)){
            for(int stars=N; stars>0; stars--){
            printf("*");
            } 
            printf("\n");
        }
        else{
            printf("*");
            for(int spaces=(N-2); spaces>0; spaces--){
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
        space_count++;
    }
    
    return 0;
}