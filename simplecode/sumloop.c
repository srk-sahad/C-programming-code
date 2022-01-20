#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i=1,sum=0;
    float avg;
    while (i<=5)
    {
        printf("enter the number = ");
        scanf("%d",&a);
        sum+=a;
        i++;
    }
    printf("sum is= %d",sum);
    avg=sum/5;
    printf("\naverage is= %f",avg);
    getch();
}