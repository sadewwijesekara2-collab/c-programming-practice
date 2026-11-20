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
        for(i=(rows-1); i>=1;i--){
            printf(" ");
        }
        for(j=1; j<=h; j++){
            printf("*");
        }
        h=h+1;
        printf("\n");
    }
}