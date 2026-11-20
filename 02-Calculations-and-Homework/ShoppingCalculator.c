#include <stdio.h>

int main(void){
    char itemCode[5];
    int quantity;
    float pricePerItem;
    


    printf("Enter Item Code : ");
    scanf("%s",&itemCode);
    printf("\nEnter Quantity : ");
    scanf("%d",&quantity);
    printf("\nEnter Price Per Item : ");
    scanf("%f",&pricePerItem);

    float subtotal = quantity*pricePerItem;
    float tax = subtotal*0.10;
    float total = subtotal + tax;

    int freeDelivery =  subtotal >= 5000.00;
    int largeOrder = quantity >= 10;

    printf("Purchase Summary\n");
    printf("-------------------\n");
    printf("Item Code :  %s\n", itemCode);
    printf("Quantity : %d\n",quantity);
    printf("Price Per Item : %.2f\n",pricePerItem);
    printf("Subtotal : LKR %.2f\n",subtotal);
    printf("Tax : LKR %.2f\n",tax);
    printf("Total : LKR %.2f\n",total);
    printf("Free Delivery : %d\n",freeDelivery);
    printf("Large Order : %d",largeOrder);


    return 0;
}