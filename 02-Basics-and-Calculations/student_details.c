
#include <stdio.h>

int main() {
    int age;
    char grade;
    float mark;

    printf("Enter Your Age: ");
    scanf("%d", &age);

    printf("Enter Your Grade: ");
    scanf(" %c", &grade);

    printf("Enter Your Marks: ");
    scanf("%f", &mark);

    printf("Your Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("Mark: %.2f\n", mark);

    return 0;
}
