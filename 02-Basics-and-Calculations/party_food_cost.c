#include <stdio.h>

int main(){

    const float serviceCharge = 0.1;

    int numOfGuests;
    float costPerPerson;
    
    printf("Enter Number of Guests : ");
    scanf("%d",&numOfGuests);
    printf("Enter Cost per Person : ");
    scanf("%f",&costPerPerson);
    
    float total = numOfGuests * costPerPerson;
    float costAfterServiceCharge = total + (total*serviceCharge); 
     
    printf("Total Cost : %.2f\n",total);
    printf("Cost After Service Charge : %.2f\n",costAfterServiceCharge);

    return 0;
}