#include <stdio.h>

int main(){
    int i ;
    int j;
    int rows;
    int colums;

    printf("Enter the Number of Rows : ");
    scanf("%d",&rows);

    printf("Enter the Number of Coloums : ");
    scanf("%d",&colums);

    for(i=1; i<=rows; i++){
        for(j=1; j<=colums; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
