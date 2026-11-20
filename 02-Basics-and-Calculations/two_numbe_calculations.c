#include <stdio.h>

int main(){

    int num1;
    int num2;

    printf("Enter First Number : ");
    scanf("%d",&num1);
    printf("Enter Your Second Number : ");
    scanf("%d",&num2);

    //Calculation
    int sum = num1+num2;
    int difference = num1-num2;
    int product = num1*num2;
    int remainder;
    int devision;

    //condition
    if (num2 ==0){
        printf("Sum = %d\n",sum);
        printf("Difference = %d\n",difference);
        printf("Product = %d\n",product);
        printf("Please Enter a Different Number for Second Number");
    }else{
        printf("Sum = %d\n",sum);
        printf("Difference = %d\n",difference);
        printf("Product = %d\n",product);
        remainder = num1%num2;
        devision = num1/num2;
        printf("Remainder = %d\n",remainder);
        printf("Devision = %d",devision);


    }
    return 0;

    
}