// c prog for print fibonacci series
#include<stdio.h>
#include<conio.h>
void main(){
    int n,i;
    long int aray[50];

    printf("Enter the value of n:\n");
    scanf("%d",&n);
    aray[0]=-1;
    aray[1]=1;
    printf("FIBONACCI SERIES: \n");
    for(i=2;i<=n+1;i++){
    aray[i]=aray[i-1]+aray[i-2];
    printf(" %ld",aray[i]);
    }
  getch();
  }


