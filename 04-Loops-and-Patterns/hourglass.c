#include <stdio.h>

int main(){
    int N;
    int stars;
    int spaces;
    int rows;
    int star_count=3;
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
    for(rows=(N-1); rows>0; rows--){
        for(spaces=(rows-1); spaces>0; spaces--){
            printf(" ");
        }
        for(stars=star_count; stars>0; stars--){
            printf("*");
        }
        star_count=star_count+2;
        printf("\n");
    }
}