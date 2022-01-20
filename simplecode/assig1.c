//percentage and sum of 3 sub
#include<stdio.h>
#include<conio.h>
void main(){
    float sub1,sub2,sub3,total,percentage;
    printf("enter mark for sub1: ");
    scanf("%f", &sub1);
    printf("enter mark for sub2: ");
    scanf("%f", &sub2);
    printf("enter mark for sub3: ");
    scanf("%f", &sub3);
    total=sub1+sub2+sub3;
    percentage= (total/150)*100;
    printf("total mark is %f", total);
    printf("\npercentage is %f", percentage);
    getch();
}