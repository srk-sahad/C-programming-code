// c prog for linear search
#include<stdio.h>
#include<conio.h>
void main()
{   int search,i,n;
    printf("enter no of element in array\n");
    scanf("%d",&n);
    int array[n];
    printf("enter %d numbers\n",n);
    for ( i= 0; i<n; i++)
        {   scanf("%d",&array[i]);
        }
        printf("enter the number to search\n");
        scanf("%d",&search);
        for ( i = 0; i < n; i++)
            {
            if(array[i]==search)
            {   printf("%d is present at location %d\n",search,i+1);
                break;
            }
            }
            if (i==n)
            {
                printf("%d isn't present in the array\n",search ); 
            }
            getch();
}