#include <stdio.h>

int main() {

    int N;
    int number=1;

    printf("Enter the Numbe of Rows: ");
    scanf("%d", &N);

    for(int rows=N; rows>0; rows--){
        for(int i=rows; i>0; i--){
            printf("%d", number);
            number++;
        }
        printf("\n");
        number=1;
    }

}