#include <stdio.h>

int main(){
    int i;
    int j;
    int N;

    printf("Enter the Number of Colums and Rows : ");
    scanf("%d",&N);

    for(i=1; i<=N; i++){
        for(j=1; j<=N; j++){
            printf("*");
        }
        printf("\n");
    }

}