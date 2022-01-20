#include<stdio.h>
#include<conio.h>
void main()
{
    int num,count=0,i=1;
    printf("enter a number: ");
    scanf("%d",&num);
    while (i<=num)
    {
        if (num%i==0)
        {
            count++;
        }
            i++;  
        }
        if (count==2)
            printf("number is a prime");
        else
            printf("number is not a prime");
    getch();    
}
