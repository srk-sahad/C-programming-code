// c prog for print fibonacci series in array
#include <stdio.h>
#include<conio.h>
void main()
{       int fib[24];
        int i,n;
        printf("enter value of n:\n");
        scanf("%d",&n);
        fib[0] = 0;
        fib[1] = 1;
        printf("fibonacci series:\n");
        for(i = 2; i <n; i++)
            fib[i] = fib[i-1] + fib[i-2];

        for (i = 0; i <n; i++)
            printf("%d ",fib[i]);
        getch();
}