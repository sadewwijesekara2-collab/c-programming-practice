#include <stdio.h>

int main(){
    int age;

    printf("Enter your Age : ");
    scanf("%d", &age);

    if(age<0){
        printf("Invalid Age");
    }    
    else{
        if(age<5){
            printf("Free");
        }else if(age>=5 & age<=12){
            printf("Your Ticket Price is : LKR 500.00");
        }else if(age>=13 & age<=17){
            printf("Your Ticket Price is : LKR 800.00");
        }else if(age>=18 & age<=59){
            printf("Your Ticket Price is : LKR 1200.00");
        }else{
            printf("Your Ticket Price is : LKR 600.00");
        }
    }

}