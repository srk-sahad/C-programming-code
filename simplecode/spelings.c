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
        printf("the number is one");
        break;
    case 2 :
        printf("the number is two");
        break;
    case 3 :
        printf("the number is three");
        break;
    case 4 :
        printf("the number is four");
        break;
    case 5 :
        printf("the number is five");
        break;
    case 6 :
        printf("the number is  six");
        break;
    case 7 :
        printf("the number is seven");
        break;
    case 8 :
        printf("the number is eigth");
        break;
    case 9 :
        printf("the number is nine");
        break;
    case 10 :
        printf("the number is ten");
        break;
    default:
    printf("invalid choice");
        break;
    }
    getch();
}