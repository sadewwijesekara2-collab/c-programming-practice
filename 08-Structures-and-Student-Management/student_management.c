#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[30];
    int marks;
};

void displayAllStudents(struct Student *ptr,int studentCount){

    for(int i=0; i<studentCount; i++){
        printf("\n\nStudent ID : %d", (ptr+i)->id);
        printf("\nStudent Name : %s", (ptr+i)->name);
        printf("\nStudent Marks : %d", (ptr+i)->marks);
    }
    
}

void searchStudentById(int studentId,struct Student *ptr,int studentCount){
    int num=0;
    int found=0;
    for(int i = num; i<studentCount; i++){
        if(studentId == (ptr+i)->id){
            printf("\n\nStudent ID : %d", (ptr+i)->id);
            printf("\nStudent Name : %s", (ptr+i)->name);
            printf("\nStudent Marks : %d", (ptr+i)->marks);
            found = 1;
        }else{
            num++;
        }
        if(found==0){
            printf("\nStudent not Found!");
        }
    }
}
void displayHighestMarks(struct Student *ptr,int studentCount){
    int highestMark = (ptr)->marks;
    int num = 0 ;
    for(int i=num; i<studentCount; i++){
        if((ptr+i)->marks > highestMark ){
            highestMark = (ptr+i)->marks;
        }else{
            num ++;
        }
    }
    printf("\nHighest Mark : %d", highestMark);
}

void calculatAverage(struct Student *ptr,int studentCount){
    float total = 0;
    float average;
    for(int i=0; i<studentCount; i++){
        total=total+((ptr+i)->marks);
    }
    average = total/studentCount;
    printf("\nAverage is : %.2f", average);
}

void addBonusMark(int studentId,struct Student *ptr,int studentCount){
    int num = 0;
    int found = 0;
    for(int i = num; i<studentCount; i++){
        if(studentId == (ptr+i)->id){
            (ptr+i)->marks = (ptr+i)->marks + 5;

            printf("\nUpdated Result Sheet");

            printf("\n\nStudent ID : %d", (ptr+i)->id);
            printf("\nStudent Name : %s", (ptr+i)->name);
            printf("\nStudent Marks : %d", (ptr+i)->marks);
            found=1;
        }else{
            num++;
        }
        if(found==0){
            printf("\nStudent not Found!");
        }
    }    
}

int main(){


    int studentCount;
    int number;


    printf("How many student data you want to enter(1-5) : ");
    scanf("%d", &studentCount);

    while(studentCount<1 || studentCount>5){
        printf("How many student data you want to enter(1-5) : ");
        scanf("%d", &studentCount);
    }

    struct Student students[studentCount];

    struct Student *ptr = &students[0];

    for(int i = 0; i<studentCount; i++){
        printf("\nEnter Student ID : ");
        scanf("%d", &(ptr+i)->id);

        char name[30];
        printf("Enter Student Name : ");
        scanf("%s", &name);
        strcpy((ptr+i)->name,name);

        printf("Enter Student Marks : ");
        scanf("%d", &(ptr+i)->marks);
    }

    printf("\n\n==========STUDENT MANAGEMENT SYSTEM==========\n\n1. Display all students\n2. Search student by ID\n3. Display highest marks\n4. Calculate average\n5. Add bonus marks\n6. Exit\nEnter the Number : ");
    scanf("%d", &number);

    while(number<1 || number>6){
        printf("\n\n==========STUDENT MANAGEMENT SYSTEM==========\n\n1. Display all students\n2. Search student by ID\n3. Display highest marks\n4. Calculate average\n5. Add bonus marks\n6. Exit\nEnter the Number : ");
        scanf("%d", &number);
    }

    while(1){

        if(number == 1){
            displayAllStudents(ptr,studentCount);

            printf("\n\n==========STUDENT MANAGEMENT SYSTEM==========\n\n1. Display all students\n2. Search student by ID\n3. Display highest marks\n4. Calculate average\n5. Add bonus marks\n6. Exit\nEnter the Number : ");
            scanf("%d", &number);
        }else if(number == 2){
            int studentId;
            printf("\n\nEnter Student ID : ");
            scanf("%d", &studentId);
            searchStudentById(studentId,ptr,studentCount);

            printf("\n\n==========STUDENT MANAGEMENT SYSTEM==========\n\n1. Display all students\n2. Search student by ID\n3. Display highest marks\n4. Calculate average\n5. Add bonus marks\n6. Exit\nEnter the Number : ");
            scanf("%d", &number);

        }else if(number == 3){
            displayHighestMarks(ptr,studentCount);

            printf("\n\n==========STUDENT MANAGEMENT SYSTEM==========\n\n1. Display all students\n2. Search student by ID\n3. Display highest marks\n4. Calculate average\n5. Add bonus marks\n6. Exit\nEnter the Number : ");
            scanf("%d", &number);

        }else if(number == 4){
            calculatAverage(ptr,studentCount);

            printf("\n\n==========STUDENT MANAGEMENT SYSTEM==========\n\n1. Display all students\n2. Search student by ID\n3. Display highest marks\n4. Calculate average\n5. Add bonus marks\n6. Exit\nEnter the Number : ");
            scanf("%d", &number);
        }else if(number == 5){
            int studentId;
            printf("\n\nEnter Student ID : ");
            scanf("%d", &studentId);
            addBonusMark(studentId,ptr,studentCount);

            printf("\n\n==========STUDENT MANAGEMENT SYSTEM==========\n\n1. Display all students\n2. Search student by ID\n3. Display highest marks\n4. Calculate average\n5. Add bonus marks\n6. Exit\nEnter the Number : ");
            scanf("%d", &number);


        }else{
            printf("\nThanks For Using the Program");
            break;
            
        }
    }    
    

    return 0;

}