#include <stdio.h>

int main(){
    float tempreture;

    printf("Enter Your Tmepreture :");
    scanf("%f", &tempreture);

    float farenheit = (tempreture*9/5)+32;

    printf("Your Tempreture from Farenheit = %.2f",farenheit);

    return 0;
}