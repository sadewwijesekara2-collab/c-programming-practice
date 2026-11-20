#include <stdio.h>

int main(){
    int i;
    int j;
    int rows;

    printf("Enter the Number of Rows : ");
    scanf("%d",&rows);

    for(i=1; i<=rows; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}