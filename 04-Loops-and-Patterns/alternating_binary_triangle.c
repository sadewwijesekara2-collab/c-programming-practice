#include <stdio.h>

int main(){

    int N;
    int number=1;
    int round=1;

    printf("Enter the Number of Rows: ");
    scanf("%d", &N);

    for(int rows=N; rows>0; rows--){
        for(int i=round; i>0; i--){
            if(round==1){
                number=1;
                printf("1");
            }
            else if (number==0)
            {
                printf("1");
                number=1;
            }
            else{
                number=0;
                printf("0");
            }
            
            
        }
        round++;
        printf("\n");
    }
}