//AREA AND PERIMETER of cricle
#include<stdio.h>
#include<conio.h>
void main(){
    
    float a=0,r,p=0,pi=3.14;
    printf("Enter the radius: ");
    scanf("%f", &r);
    a=pi*r*r;
    p=2*pi*r;
    printf("Area of the cricle: %f",a);
    printf("\nPerimeter of the cricle: %f", p);
    getch();
}