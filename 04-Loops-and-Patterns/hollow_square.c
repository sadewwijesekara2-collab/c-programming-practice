#include <stdio.h>
 int main(){
    int N;
    int rows;

    printf("Enter the Number of Rows: ");
    scanf("%d", &N);

    for(int stars=N; stars>0; stars--){
        printf("*");
    }
    printf("\n");
    for(rows=(N-2); rows>0; rows--){
        printf("*");
        for(int spaces=(N-2); spaces>0; spaces--){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(int stars=N; stars>0; stars--){
        printf("*");
    }    

 }