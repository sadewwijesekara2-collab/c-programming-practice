#include <stdio.h>

int main(){

    int food_code;
    float total=0;
    int qty;

    printf("===============Food Menu===============");
    printf("\n\n1 = Burger (LKR 800)\n2 = Pizza (LKR 1,500)\n3 = Fried Rice (LKR 1,000)\n0 = Finish");

    printf("\n\nEnter your Food Item : ");
    scanf("%d", &food_code);
    

    while(food_code!=0){
        printf("\nEnter Quantity : ");
        scanf("%d", &qty);
        if(food_code==1){
            total = total + (800*qty);

        }
        else if(food_code==2){
            total = total + (1500*qty); 
        }
        else if(food_code==3){
            total = total + (1000*qty);
        }else{
            printf("Enter Valid Code");
        }

        printf("\nEnter your Food Item : ");
        scanf("%d", &food_code);
        
    }
    printf("Your Bill is : LKR %.2f", total);
}