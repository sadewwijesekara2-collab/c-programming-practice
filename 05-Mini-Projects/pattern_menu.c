#include <stdio.h>

int main(){

    int pattern_number;
    int rows;
    int cols;
    int count = 1;

    printf("=================Pattern Menu==================");
    printf("\n1 = Solid square\n2 = Increasing triangle\n3 = Pyramid\n0 = Exit");

    printf("\nEnter the Pattern Number: ");
    scanf("%d", &pattern_number);

    while(pattern_number!=0){
        if(pattern_number==1){
            printf("\nEnter the Number of Rows: ");
            scanf("%d", &rows);

            for(int i=rows; i>0; i--){
                for(int stars=rows; stars>0; stars--){
                    printf("*");
                }
                printf("\n");
            }

        }else if(pattern_number==2){
            printf("\nEnter the Number of Rows: ");
            scanf("%d", &rows);

            for(int i=rows; i>0; i--){
                for(int stars=count; stars>0; stars--){
                    printf("*");
                }
                printf("\n");
                count++;
            }

        }else if(pattern_number==3){
            printf("\nEnter the Number of Rows: ");
            scanf("%d", &rows);
            count = 1; 

            for(int i=rows; i>0; i--){
                for(int spaces=(i-1); spaces>0; spaces--){
                    printf(" ");
                }
                for(int stars=count; stars>0; stars--){
                    printf("*");
                }
                printf("\n");
                count = count + 2;
            }

        }else{
            printf("\nEnter Valid Pattern Number ");
        }
        printf("\nEnter the Pattern Number: ");
        scanf("%d", &pattern_number);
    }
}