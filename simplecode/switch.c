#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    printf("enter the no.of choice :");
    scanf("%d",&a);
    switch (a)
    {
    case /* constant-expression */ 1 :
        /* code */
        printf("first period BEE");
        break;
    case 2 :
        printf("second period CP");
        break;
    case 3 :
        printf("third period PHY");
        break;
    default:
    printf("invalid choice");
        break;
    }
    getch();
}