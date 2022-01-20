#include<stdio.h>
#include<conio.h>
struct studentdetails
{
    int rollno;
    char sname[20];
    int marks[50];
    float avg;
};
void main()
{
    struct studentdetails SD[50];
    int i,j,p,sum=0;
    printf("enter no.of students\n");
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        printf("enter roll.no and name of the student\n");
        scanf("%d %s",&SD[i].rollno,SD[i].sname);
        printf("enter the marks in three subject");
        for ( j= 0;j <3;j++)
        {
            scanf("%d",&SD[i].marks[j]);
            sum+=(SD[i].marks[j]);
        }
        SD[i].avg=sum/(3.0);
        sum=0;
    }
    printf("roll.no\tNAME\tsub1\tsub2\tsun3\taverage\n");
    for ( i = 0; i < p; i++)
    {
        printf("%d\t%s\t",SD[i].rollno,SD[i].sname);
        for ( j = 0; j < 3; j++)
        {
           printf("%d\t",SD[i].marks[j]);
        }
        printf("%f\n",SD[i].avg);
    }
    getch();
}