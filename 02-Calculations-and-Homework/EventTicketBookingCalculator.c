#include <stdio.h>

int main(){
    //creating constant
    const float ticketPrice = 1500.00;
    const float taxRate = 0.08;
    const float serviceChargePerTicket = 100.00; 

    //Declairing Variables

    char customerCategory ;
    int numberOfTickets ;
    int customerAge;
    float amountPaidByTheCustomer;

    //Inputs

    printf("Customer category (A = Adult, S = Student) : ");
    scanf("%c",&customerCategory);
    printf("\nNumber of Tickets : ");
    scanf("%d",&numberOfTickets);
    printf("\nCustomer Age : ");
    scanf("%d",&customerAge);
    printf("\nAmount Paid by the Customer : ");
    scanf("%f",&amountPaidByTheCustomer);

    //Calculation

    float ticketCost = numberOfTickets*ticketPrice;
    float serviceCharge = numberOfTickets*serviceChargePerTicket;
    float tax = ticketCost*taxRate;
    float finalBill = ticketCost + serviceCharge + tax;
    float change = amountPaidByTheCustomer - finalBill;
    float averageCost = finalBill/numberOfTickets;

    int largeBoking = numberOfTickets >= 5;
    int eligibleForSpecialEntry = customerAge >=18 && numberOfTickets >= 3;
    int studentCustomer = customerCategory == 'S';

    //Output
    
    printf("EVENT BOOKING SUMMARY\n");
    printf("-------------------------------\n");
    printf("Customer Category : %c\n",customerCategory);
    printf("Customer Age : %d\n",customerAge);
    printf("Number of Tickets : %d\n",numberOfTickets);
    printf("Ticket Cost : LKR %.2f\n",ticketCost);
    printf("Service Charge : LKR %.2f\n",serviceCharge);
    printf("Tax : LKR %.2f\n",tax);
    printf("Final Bill : LKR %.2f\n",finalBill);
    printf("Average Cost Per Ticket : LKR %.2f\n",averageCost);
    printf("Amount Paid : LKR %.2f\n",amountPaidByTheCustomer);
    printf("Change : LKR %.2f\n",change);
    printf("Large Booking : %d\n",largeBoking);
    printf("Special Entry Eligible : %d\n",eligibleForSpecialEntry);
    printf("Student Customer : %d\n",studentCustomer);


    return 0;

}