#include <stdio.h>

int main(){

    int N;
    int number=2;

    printf("Enter the Number of Rows: ");
    scanf("%d", &N);

    for(int rows=N; rows>0; rows--){
        for(int i=1; i<number; i++){
            printf("%d", i);
        }
        printf("\n");
        number++;
    }
}