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
        space_count++;
        for(int stars=N; stars>0; stars--){
            printf("*");
        }
        printf("\n");
    }
}