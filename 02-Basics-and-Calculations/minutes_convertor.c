#include <stdio.h>

int main(){
    int time;

    printf("Enter Time : ");
    scanf("%d",&time);

    int hours;
    int minutes;

    if (time<0){
        printf("Enter Vaid Number");
    }else{
        hours = time/60;
        minutes = time%60;
        printf("%d Hours and %d Minutes",hours,minutes);
    }
    return 0;
}