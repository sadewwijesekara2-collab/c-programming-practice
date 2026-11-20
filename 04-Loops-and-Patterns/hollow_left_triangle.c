#include <stdio.h>

int main(){
    
    int N;
    int i;
    int j;
    
    printf("Enter the Number of Rows: ");
    scanf("%d", &N);

    printf("*");
    printf("\n");
    for(i=(N-2); i>0; i--){
        printf("**");
        printf("\n");
    }
    for(j=N; j>0; j-- ){
        printf("*");
    }
    return 0;

}