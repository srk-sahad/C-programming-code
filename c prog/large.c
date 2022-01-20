#include <stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter the numbers\n");
    scanf("%d %d %d", &a,&b,&c);
    printf("a=%d b=%d c=%d\n", a,b,c);
    if (a>b)
    {
        if (a>c)
        {   printf("a=%d is the largest number\n",a);
        }
        else
        {   printf("c=%d is the largest number\n",c);
        }
    }
    else if (b>c)
        printf("b=%d is the largest number\n",b);
    else
        printf("c=%d is the largest number\n",c);
    getch();
}