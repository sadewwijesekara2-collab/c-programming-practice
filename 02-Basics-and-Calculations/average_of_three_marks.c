#include <stdio.h>

int main(){
    float mark1;
    float mark2;
    float mark3;

    printf("Enter First Mark : ");
    scanf("%f",&mark1);
    printf("Enter Second Mark : ");
    scanf("%f",&mark2);
    printf("Enter Third Mark : ");
    scanf("%f",&mark3);

    float average;

    if(mark1<0 || mark1>100 || mark2<0 || mark2>100 || mark3<0 || mark3>100){
        printf("Enter Values Between 0 and 100");
    }else{
        average = (mark1+mark2+mark3)/3;
        printf("Average : %.2f",average);
    }
    return 0;
}