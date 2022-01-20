//program to add digit of a 4 digit number
#include<stdio.h>
#include<conio.h>  
 void main()    
{    
    int n,sum=0,m;    
    printf("Enter a 4 digit number:");    
    scanf("%d",&n);    
    m=n%10;    
    sum=sum+m;    
    n=n/10;    
    m=n%10;    
    sum=sum+m;    
    n=n/10;
    m=n%10;    
    sum=sum+m;    
    n=n/10;
    m=n%10;    
    sum=sum+m;    
    printf("Sum is= %d",sum);    
    getch();  
}   