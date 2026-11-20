#include <stdio.h>

int main(){

    int N;
    int rows;
    int spaces;
    int space_count1=0;

    printf("Enter the Number of Rows(\"Please Enter a Odd Number Between 3 and 11\"): ");
    scanf("%d", &N);

    int space_count2=((2*N)-3);
    
    for(rows=N; rows>0; rows--){
        for(spaces=space_count1; spaces>0; spaces--){
            printf(" ");
        }
        space_count1++;
        printf("*");

        for(spaces=space_count2; spaces>0; spaces--){
            printf(" ");
        }
        
        if(space_count2>0){
            printf("*");
            printf("\n");
        }
        else{
            printf("\n");
        }
        space_count2=space_count2-2;
    }
    space_count2=1;
    for(rows=(N-1); rows>0; rows--){
        for(spaces=(space_count1-2); spaces>0; spaces--){
            printf(" ");
        }
        space_count1--;
        printf("*");
        
        for(spaces=space_count2; spaces>0; spaces--){
            printf(" ");
        }
        space_count2=space_count2+2;
        printf("*");
        printf("\n");
    }
    
}