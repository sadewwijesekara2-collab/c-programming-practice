#include <Stdio.h>

int main(){
    int N;
    int rows;
    int spaces;
    int stars;

    printf("Enter the Number(\'Please Enter a Odd Number Between 3 and 11\'): ");
    scanf("%d", &N);

    for(rows=(N/2); rows>0; rows--){
        for(spaces=(N/2); spaces>0; spaces--){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }

    for(stars=N; stars>0; stars--){
        printf("*");
    }
    printf("\n");

    for(rows=(N/2); rows>0; rows--){
        for(spaces=(N/2); spaces>0; spaces--){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }

    return 0;
}