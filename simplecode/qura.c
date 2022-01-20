#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    float D,r1,r2,r,id,a,b,c;
    printf("enter a,b,c:");
    scanf("%f %f %f", &a,&b,&c);
    D= (b*b)-(4*a*c);
    if (D>0)
    {   printf("ROOT ARE REAL AND DISTINCT");
        r1=(-b+sqrt(D))/(2*a);
        r2=(-b-sqrt(D))/(2*a);
        printf("\nr1= %f",r1);
        printf("\nr2= %f",r2);
    }
    else if (D==0)
    {   printf("ROOT ARE REAL AND EQUAL");
        r1=-b/(2*a);
        r2=r1;
        printf("\nr1= %f",r1);
        printf("\nr2= %f",r2);
    }
    else  if(D=-D)
    {   printf("ROOT ARA COMPLEX And IMAGINARY");
        r=-b/(2*a);
        id=sqrt(D)/(2*a);
        printf("\nr1= %f+i%f",r,id );
        printf("\nr2= %f-i%f", r,id );
    }
        getch();
}

