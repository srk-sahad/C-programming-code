#include<stdio.h>
int big(int a,int b);
int main()
{
    int i,j,s,r,k;
    printf("enter 3 numbers: \n");
    scanf("%d %d %d ",&s,&r,&k);
    i=big(s,r);
    j=big(i,k);
    printf("largest number is : %d",j);
    return 0;
};
    int big(int a,int b )
    {
        if (a>b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
