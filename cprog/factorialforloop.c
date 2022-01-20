//LOOP TO CALCULATE FACTORIAL OF A NUMBER BY FOR LOOP
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,factorial=1;
    printf("Enter The Number:");
    scanf("%d",&n);
    for ( i=1; i <=n; i++)
    {
        factorial=factorial*i;
        
    }
    printf("\n The Factorial of %d is %d",n,factorial);
    getch();
}