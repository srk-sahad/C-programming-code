#include<stdio.h>
#include<conio.h>
void main(){
    int i=1;
    int sum=0;
    while(i<=10)
    {
        printf("\n %d", i);
        sum+=i;
        
        i++;
    }
    printf("\nsum is= %d",sum);
    getch();
}