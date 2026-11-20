#include <stdio.h>

int main(void){
    char name[20];
    char hometown[30];
    int age;
    int prackhours;
    printf("Enter your First Name:");
    scanf("%s",&name);
    printf("Enter your Hometown:");
    scanf("%s",&hometown);
    printf("Enter your Age: ");
    scanf("%d",&age);
    printf("Enter your Weekly Practice Hours: ");
    scanf("%d",&prackhours);
    printf("---STUDENT PROFILE---\n");
    printf("Name: %s",name,"\n");
    printf("Hometown: %s",hometown,"\n");
    printf("Age: %d",age,"/n");
    printf("Four-week practice goal: %d",prackhours*4,"\n");
    return 0;
}
