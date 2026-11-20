#include <Stdio.h>

int main(){

    float balance = 10000.00;
    float deposit;
    float withdraw;
    int choice;


    printf("========== MINI ATM ==========");
    printf("\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n0. Exit");
    printf("\n\n Enter Choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1: {
            printf("\nYour Account Balance is : LKR %.2f", balance);
            printf("\n\n========== MINI ATM ==========\n");
            printf("1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n0. Exit");
            printf("\n\n Enter Choice: ");
            scanf("%d", &choice);
            
        }
        case 2: {
            printf("\nPlease Enter the Amount you Want to Deposit: LKR ");
            scanf("%f", &deposit);

            if(deposit > 0){
                balance = balance + deposit;
                printf("\nYour Deposit is Suceed");
                printf("\nNew Balance : LKR %.2f", balance);
                printf("\n\n========== MINI ATM ==========");
                printf("\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n0. Exit");
                printf("\n\n Enter Choice: ");
                scanf("%d", &choice);
            }else{
                printf("\nPlease Enter a Valid Amount");
                printf("\n\n========== MINI ATM ==========");
                printf("\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n0. Exit");
                printf("\n\n Enter Choice: ");
                scanf("%d", &choice);
                
            }
            break;

        }
        case 3: {
            printf("\nPlease Enter the Amount you Want to Withdraw : LKR ");
            scanf("%f", &withdraw);

            if(withdraw < 0 || withdraw > balance){
                printf("\nPlease Enter a Valid Amount");
                printf("\n\n========== MINI ATM ==========");
                printf("\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n0. Exit");
                printf("\n\n Enter Choice: ");
                scanf("%d", &choice);
                
                
            }else{
                balance = balance - withdraw;
                printf("\nYour Money Withdraw is Succeed");
                printf("\nNew Balance : LKR %.2f", balance);
                printf("\n\n========== MINI ATM ==========");
                printf("\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n0. Exit");
                printf("\n\n Enter Choice: ");
                scanf("%d", &choice);
                
            }
            break;
        }
        case 0 : {
            printf("\nThank you for using Mini ATM!");
            break;
        }
        default : {
            printf("\nInvalid choice");
            printf("\n\n========== MINI ATM ==========");
            printf("\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n0. Exit");
            printf("\n\n Enter Choice: ");
            scanf("%d", &choice);
        }
    }
}