#include<stdio.h>
#include<conio.h>
void main ()
{
    int num[]={24,34,12,44,56,17};
    int i,*j;
    j=&num[0];
    for ( i = 0; i <=5; i++)
    {
        printf("\naddress =%u",j);
        printf(" elemnet=%d",*j);
        j++;
    }
    getch();
}