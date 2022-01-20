#include<stdio.h>
#include<conio.h>
void clrscr(void);
int main()
{
    void clrscr();
    unsigned int num;
    unsigned int rev=0;
    int rem,sum=0;
    printf("Enter a 4 digit number:\n");
    scanf("%d",&num);
    rem=num%10;
    sum=sum+rem;
     while(num!=0)
      { rem=num%10;
        rev=(rev*10)+rem;
        num/=10;
      }
    rem=rev%10;
    sum=sum+rem;
    printf("Sum of first and last digits of number=%d",sum);
    getch();
    return 0;
}