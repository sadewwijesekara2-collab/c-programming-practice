#include <stdio.h>

//Part 3 Update one mark

void update_mark(int *mark,int new_mark){
    *mark = new_mark;
}   

//Part 4 Swap two marks

void swap_marks(int *first, int *second){
    int firstMark = *first;
    int secondMark = *second;
    
    *first = *second;
    *second = firstMark;
}

    //Part 5 Add Bonus Marks
void add_bonus(int *marks, int lenght, int bonus){
    for(int i=0; i<lenght; i++){
        *(marks+i) = *(marks+i) + bonus;
        if(*(marks+i) > 100){
            *(marks+i) = 100;
        }
    }
}


    // Part 6 Calculate results 

void calculate_results(const int *marks,int count,int *total,double *average){

    for(int i = 0; i<count; i++){
        *total = *total + *(marks + i);
    }
    *average = (double)*total/count;
}


int main(){

    //Part 1 Student group name and strings 



    char group_name[]="Team Alpha";

    char *groupName = &group_name[0];

    
    printf("%s\n",group_name);  //Print the complete group name
    printf("%c\n",*groupName);  //Print its first character

    *groupName='C';  //Change the first character to another letter

    printf("%s\n",group_name);  //Print the updated group name


    //Part 2 Marks and addresses

    int marks[]={45,62,38,77,54};
    int *mark = &marks[0];

    int count = sizeof(marks)/sizeof(marks[0]);

    // printf("%d\n",count);

    printf("\n\n========Mark List========\n\n");
    for(int i = 0; i<count; i++){
        printf("Student No : %d \nMarks : %d\n Address : %p\n\n",(i+1),*(mark + i),&marks[i]);
    }



    //Part 3 Update one mark


    update_mark((mark+2),50);


    printf("\n\n========Updated Mark List========\n\n");
    for(int i = 0; i<count; i++){
    printf("Student No : %d \nMarks : %d\nAddress : %p\n\n",(i+1),*(mark + i),&marks[i]);
    }

    //Part 4 Swap two marks

    swap_marks(mark,(mark+4));

    printf("\n\n========Updated Mark List After Swap========\n\n");
    for(int i = 0; i<count; i++){
    printf("Student No : %d \nMarks : %d\nAddress : %p\n\n",(i+1),*(mark + i),&marks[i]);
    }

    //Part 5 Add Bonus Marks

    add_bonus(mark,count,5);

    printf("\n\n========Updated Mark List After Bonus========\n\n");
    for(int i = 0; i<count; i++){
    printf("Student No : %d \nMarks : %d\nAddress : %p\n\n",(i+1),*(mark + i),&marks[i]);
    }


    // Part 6 Calculate results


    int totalMarks = 0;
    int *total = &totalMarks;

    double averageMark;
    double *average = &averageMark;

    calculate_results(mark,count,total,average);

    printf("Total : %d\n",totalMarks);
    printf("Average : %.2f\n",averageMark);

    return 0;
}