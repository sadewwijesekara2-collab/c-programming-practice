#include <stdio.h>

int main(){
    int i;
    int j;
    int N;

    printf("Enter the Number of Rows : ");
    scanf("%d", &N);

    for(i=N; i>=1; i--){
        for(j=i; j>=1; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}