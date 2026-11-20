#include <stdio.h>
 int main(){
    int N;
    int rows;
    int spaces;
    int stars;
    int count = 1;

    printf("Enter the Nomber of Rows: ");
    scanf("%d", &N);

    for(rows=N; rows>0; rows--){
        for(spaces=(rows-1); spaces>=0; spaces--){
            printf(" ");
        }
        for(stars=count; stars>0; stars--){
            printf("*");
        }
        count=count+2;
        printf("\n");
    }
 }