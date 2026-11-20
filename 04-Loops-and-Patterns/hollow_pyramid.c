#include <stdio.h>

int main(){

    int N;
    int spaces;
    int rows;
    int stars;
    int rounds = 1;

    printf("Enter the Number of Rows: ");
    scanf("%d", &N);

    

    for(spaces=(N-1); spaces>0; spaces--){
        printf(" ");
    }
    printf("*");
    printf("\n");
    for(rows=(N-2); rows>0; rows--){
        for(spaces=rows; spaces>0; spaces--){
            printf(" ");
        }
        printf("*");
        
        for(spaces=rounds; spaces>0; spaces--){
            printf(" ");
        }
        rounds=rounds+2;
        printf("*");
        printf("\n");
      
    }
    
    for(stars=((2*N)-1); stars>0; stars--){
        printf("*");
    }
}