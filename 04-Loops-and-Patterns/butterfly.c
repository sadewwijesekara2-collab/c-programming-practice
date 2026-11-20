#include <stdio.h>

int main(){
    int N;
    int rows;
    int star_count=1;
    int space_count;
    int star_count2=1;

    printf("Enter a Number Between 2 and 10 : ");
    scanf("%d", &N);

    space_count=((2*N)-2);

    for(rows=N; rows>0; rows--){
        for(int stars=star_count; stars>0; stars--){
            printf("*");
        }
        star_count++;
        for(int spaces=space_count; spaces>0; spaces--){
            printf(" ");
        }
        space_count=space_count-2;
        for(int stars=star_count2; stars>0; stars--){
            printf("*");
        }
        star_count2++;
        printf("\n");
        
    }
    star_count=(N-1);
    star_count2=(N-1);
    space_count=2;
    for(rows=(N-1); rows>0; rows--){
        for(int stars=star_count; stars>0; stars--){
            printf("*");
        }
        star_count--;
        for(int spaces=space_count; spaces>0; spaces--){
            printf(" ");
        }
        space_count=space_count+2;
        for(int stars=star_count2; stars>0; stars--){
            printf("*");
        }
        star_count2--;
        printf("\n");
    }

    return 0;
}