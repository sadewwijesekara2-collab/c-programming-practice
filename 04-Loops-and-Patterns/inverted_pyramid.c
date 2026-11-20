#include <stdio.h>

int main(){
    int N;
    int rows;
    int stars;
    int spaces;
    int space_count=0;

    printf("Enter the Number of Rows: ");
    scanf("%d", &N);

    for(rows=N; rows>0; rows--){
        for(spaces=space_count; spaces>0; spaces--){
            printf(" ");
        }
        space_count++;
        for(stars=((2*rows)-1); stars>0; stars--){
            printf("*");

        }
        printf("\n");
        

    }
}