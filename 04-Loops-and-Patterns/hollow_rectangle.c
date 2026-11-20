#include <stdio.h>

int main(){
    int rows;
    int colums;
    int N;
    int R;

    printf("Enter the Number of Rows: ");
    scanf("%d", &R);

    printf("Enter the Number of Colums: ");
    scanf("%d", &N);

    for (colums=N; colums>0; colums--){
        printf("*");
    }
    printf("\n");
    for(rows=(R-2); rows>0; rows--){
        printf("**");
        printf("\n");
    }
    for (colums=N; colums>0; colums--){
        printf("*");
    }
    return 0;
}