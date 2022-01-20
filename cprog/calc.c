//c prog for claculator using using switch caser 
#include<stdio.h>
#include<conio.h>
void main()
{
    char op;
    float first, second;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%f %f", &first, &second);
    switch (op) {
    case '+':
     printf("%f + %f = %f", first, second, first + second);
      break;
    case '-':
      printf("%f - %f = %f", first, second, first - second);
      break;
    case '*':
      printf("%f * %f = %f", first, second, first * second);
      break;
    case '/':
      printf("%f / %f = %f", first, second, first / second);
      break;
    default:
      printf("Error! operator is not correct");
  }
    getch();
}