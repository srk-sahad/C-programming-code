//LOOP TO CALCULATE FACTORIAL OF A NUMBER
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i=1,factorial=1;
    printf("Enter The Number:");
    scanf("%d",&n);
    
  
    while(i<=n)
    {
        factorial=factorial*i;
        i++;
    }
    printf("\n The Factorial of %d is %d",n,factorial);
    getch();
}