#include <stdio.h>

int main(){

    int N;
    int spaces;
    int stars;
    int rows;
    int rounds=1;
    

    printf("Enter the Number of Rows: ");
    scanf("%d", &N);

    for(spaces=(N-1); spaces>0; spaces--){
        printf(" ");
    }

    printf("*");
    printf("\n");

    for(rows=(N-1); rows>0; rows--){
        
        for(spaces=(rows-1); spaces>0; spaces--){
            printf(" ");
        }
        printf("*");
        for(spaces=rounds; spaces>0; spaces--){
            printf(" ");
        }
        rounds=rounds+2;
        printf("*");
        printf("\n");
        
    }
    int space_count=rounds-4;
    rounds=1;
    for(rows=(N-2); rows>0; rows--){
        for(spaces=rounds; spaces>0; spaces--){
            printf(" ");
        }
        rounds++;
        printf("*");

        for(spaces=space_count; spaces>0; spaces--){
            printf(" ");
        }
        printf("*");
        space_count=space_count-2;
        printf("\n");
    }
    for(spaces=(N-1); spaces>0; spaces--){
        printf(" ");

    }
    printf("*");

    return 0;
}