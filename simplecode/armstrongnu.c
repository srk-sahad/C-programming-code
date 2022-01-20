#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{int n,r,t,c=0,sum=0;
 printf("Enter a number: ");
 scanf("%d", &n);
 t=n;
 while(n!=0)
 {n/=10;
  c++;
 }
 n=t;
 while(n!=0)
 {r=n%10;
  sum+=pow(r,c);
  n/=10;
 }
 if(sum==t)
 printf("%d is an armstong noumber", t);
 else
 printf("%d is not an armstrong number", t);
 getch();
}