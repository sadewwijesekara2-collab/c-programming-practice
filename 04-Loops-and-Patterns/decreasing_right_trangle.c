#include <stdio.h>

int main(){
    int i;
    int j;
    int N;
    int rows;
    int h = 1;

    printf("Enter the Number of Rows : ");
    scanf("%d",&N);

    for(rows=N; rows>=1; rows--){
        for(i=1; i<=h; i++){
            printf(" ");
        }
        for(j=rows; j>=1; j--){
            printf("*");
        }
        h=h+1;
        printf("\n");
    }
}