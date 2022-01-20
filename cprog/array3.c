#include<stdio.h>
#include<conio.h>
void main ()
{
    int arr[5];
    int i,n,sum;
    float avg;
    printf("enter value of n\n");
    scanf("%d",&n);
    printf("enter elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
   
    for ( i = 0; i < n; i++)
    {
      sum+=arr[i];
    }
    printf("sum of number %d",sum);
    avg=(float)sum/n;
    printf("\naverge of number %f",avg);
    getch();
}