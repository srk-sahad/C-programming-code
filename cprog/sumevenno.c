#include <stdio.h>
#include<conio.h>
void main()
{
    int i, n, even = 0,odd;
 
    printf("Enter the value of number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            even = even + i;
            else
            odd = odd + i;
    }
    printf("Sum of all odd numbers  = %d\n",odd);
    printf("Sum of all even numbers = %d\n", even);
}