#include<stdio.h> 
#include<conio.h>   
#include<stdlib.h>  
void main()
{  
    int a[10][10],b[10][10],mul[10][10],r,c,d,e,i,j,k;    
    system("cls"); 
    printf("enter the number of row of first matrix=");    
    scanf("%d",&r);    
    printf("enter the number of column of first matrix=");    
    scanf("%d",&c);  
    printf("enter the first matrix element=\n");    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
        scanf("%d",&a[i][j]);    
        }    
    }    
    printf("enter the number of row of second matrix=");    
    scanf("%d",&d);    
    printf("enter the number of column of second matrix=");    
    scanf("%d",&e);
    printf("enter the second matrix element=\n");    
    for(i=0;i<d;i++)    
    {    
        for(j=0;j<e;j++)    
        {    
        scanf("%d",&b[i][j]);    
        }    
    } 
    if (c !=d)
    {
       printf("matrix multipication is invaid ");
    }
    else if (c=d)
    {  
        printf("multiply of the matrix=\n");    
        for(i=0;i<r;i++)    
        {    
            for(j=0;j<e;j++)    
            {    
                mul[i][j]=0;    
                for(k=0;k<c;k++)    
                {    
                mul[i][j]+=a[i][k]*b[k][j];    
                }    
            }    
        }   
            //for printing result    
            for(i=0;i<r;i++)    
            {    
                for(j=0;j<e;j++)    
                {    
                printf("%d\t",mul[i][j]);    
                }    
                printf("\n");    
            }  
    }
    getch();
}