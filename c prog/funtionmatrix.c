#include<stdio.h>
#include<conio.h>
void read(int a[][10],int,int);
void disp(int a[][10],int,int);
void add(int a[][10],int b[][10],int,int);
void mul(int a[][10],int b[][10],int,int,int);
void transp(int a[][10],int,int);
int multi[10][10];
int sum[10][10];
int trans[10][10];
void main()
{
    int a[10][10],b[10][10],i,j,s,r,k,p,q,choice,chs;
    lb: printf("Enter the order of the first matrix\n");
    scanf("%d %d",&s,&r);
    printf("Enter the order of the second matrix\n");
    scanf("%d %d",&p,&q);
    printf("MENU\n1.Addition\n2.Multiplication\n3.Transpose\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        if(s==p && r==q)
        {
            read(a,s,r);
            read(b,p,q);
            printf("Matrix A:\n");
            disp(a,s,r);
            printf("Matrix B:\n");
            disp(b,p,q);
            printf("The sum of two matrices are\n");
            add(a,b,s,r);
            disp(sum,s,r);
        }
        else
            printf("Addition is not possible\n");
    }
    else if(choice==2)
    {
        if(r==p)
        {
            read(a,s,r);
            read(b,p,q);
            printf("Matrix A:\n");
            disp(a,s,r);
            printf("Matrix B:\n");
            disp(b,p,q);
            mul(a,b,s,q,p);
            printf("The product of two matrices is\n");
            disp(multi,s,q);
        }
        else
            printf("Multiplication is not valid\n");
    }
    else if(choice==3)
    {
        read(a,s,r);
        read(b,p,q);
        printf("Matrix A:\n");
        disp(a,s,r);
        printf("Matrix B:\n");
        disp(b,p,q);
        printf("The Transpose of the matrix A is\n");
        transp(a,s,r);
        disp(trans,r,s);
        printf("The Transpose of the matrix B is\n");
        transp(b,p,q);
        disp(trans,q,p);
    }
    else
    printf("Invalid choice\n");
    printf("To continue press 1\n");
    scanf("%d",&chs);
    if(chs==1)
        goto lb;
   
        getch();
}
void read(int a[][10],int s,int r)
{
        int i,j;
        printf("Enter the elements of the matrix\n");
        for(i=0;i<s;i++)
            for(j=0;j<r;j++)
            {
                scanf("%d",&a[i][j]);
            }
}
void add(int a[][10],int b[][10],int s,int r)
{
        int i,j;
        for(i=0;i<s;i++)
            for(j=0;j<r;j++)
            {
                sum[i][j]=a[i][j]+b[i][j];

            }
}
void mul(int a[][10],int b[][10],int s,int q,int p)
{
        int i,j,k;
        for(i=0;i<s;i++)
            for(j=0;j<q;j++)
            {
                multi[i][j]=0;
                for(k=0;k<p;k++)
                {
                    multi[i][j]=multi[i][j]+a[i][k]*b[k][j];
                }
            }
}
void transp(int a[][10],int s,int r)
{
     int i,j;
        for(i=0;i<s;i++)
            for(j=0;j<r;j++)
            {
             trans[j][i]=a[i][j];
             }
}
void disp(int a[][10],int s,int r)
{
        int i,j;
        for(i=0;i<s;i++)
        {
            for(j=0;j<r;j++)
            {
                printf("%d",a[i][j]);
                printf("\t");
            }
            printf("\n");
       }
}
