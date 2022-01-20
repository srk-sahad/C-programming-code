//PRINT EVEN NUMBER
#include<stdio.h>
#include<conio.h>
void main()
{
    int i, n;
    printf("Print all even numbers till: ");
    scanf("%d", &n);
    i=0;
    printf("All even numbers from 1 to %d are: \n", n);
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    getch();
}