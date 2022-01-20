/**
 * C program to check vowel or consonant using switch case
 */

#include <stdio.h>
#include<conio.h>
int main()
{
    char letter;

    /* Input an alphabet from user */
    printf("Enter any alphabet: ");
    scanf("%c", &letter);

    /* Switch value of letter */
    switch(letter)
    {
        case 'a': 
            printf("it is Vowel");
            break;
        case 'e': 
            printf("it is Vowel");
            break;
        case 'i': 
            printf("it is a Vowel");
            break;
        case 'o': 
            printf("it is a Vowel");
            break;
        case 'u': 
            printf("it is a Vowel");
            break;
        case 'A': 
        case 'E':
        case 'I':
        case 'O': 
        case 'U': 
            printf("it is a Vowel");
            break;
        default: 
            printf("it is a Consonant");
            break;
    }

   getch();
}