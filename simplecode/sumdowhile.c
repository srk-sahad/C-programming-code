#include<stdio.h>
#include<conio.h>
void main()
{
  int n, num, i=0,Sum=0;
  float Avg;
  printf("Enter The value of a= ");
  scanf("%d",&n);
  do
   { printf("Enter the number: ");
     scanf("%d",&num);
     Sum+=num;
     i++;
   }
   while(i<n);
   Avg =(float)Sum/n;
   printf("Sum of the %d Numbers = %d",n, Sum);
   printf("\nAverage of the %d Numbers = %f",n, Avg);
   getch();
}