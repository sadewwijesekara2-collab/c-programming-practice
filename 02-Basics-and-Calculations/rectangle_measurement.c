#include <stdio.h>

int main(){
    int length;
    int width;

    printf("Enter the Lenght : ");
    scanf("%d",&length);
    printf("Enter the Width : ");
    scanf("%d",&width);

    int area;
    int perimeter;

    if (length <0 || length==0 || width<0 || width==0 ){
        printf("Enter Valid Values");
    }else{
        area = length*width;
        perimeter = (length*2)+(width*2);
        printf("Area = %d\n",area);
        printf("Perimeter = %d\n",perimeter);
    }
    return 0;

}