#include <stdio.h>

int main(){
    int N;
    int number=1;
    int round=1;

    printf("Enter the Number of Rows: ");
    scanf("%d", &N);

    for(int rows=N; rows>0; rows--){
        for(int i=round; i>0; i--){
            printf("%d", number);
            number++;
        }
        printf("\n");
        round++;
        
    }
}