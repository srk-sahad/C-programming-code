#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[]={10,20,30,40,50,60};
    int *ptr= arr;
    printf("arr[2]=%d\n",arr[2]);
    printf("*(arr+2)=%d\n",*(arr+2));
    printf("ptr[2]=%d\n",ptr[2]);
    printf("*(ptr+2)=%d\n",*(ptr+2));
    getch();
}