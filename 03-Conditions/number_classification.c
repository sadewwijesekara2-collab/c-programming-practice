#include <stdio.h>

int main(){

    int number;

    printf("Enter a Number : ");
    scanf("%d", &number);

    if(number>0){
        printf("%d is a Positive Number", number);
    }else if(number<0){
        printf("%d is a Negative Number", number);
    }else{
        printf("The Number is Zero");
        
    }
    
    if(number%2 == 0){
        printf("%d is a Even Number", number);
    }else{
        printf("%d is a Odd Number", number);
    }
    printf("\nEnter a Number : ");
    scanf("%d", &number);
      
}