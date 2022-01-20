#include<stdio.h>
#include<conio.h>
 int main()    
{    
int a,b;
printf("enter the number a: ");
scanf("%d", &a);
printf("enter the number b: ");
scanf("%d", &b);  
printf("Before  a=%d b=%d",a,b);      
a=a+b;//a=30 (10+20)    
b=a-b;//b=10 (30-20)    
a=a-b;//a=20 (30-10)    
printf("\nAfter  a=%d b=%d",a,b);    
getch();  
}   