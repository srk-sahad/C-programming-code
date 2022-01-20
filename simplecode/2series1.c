
#include <stdio.h>
#include <string.h>
 
void main()
{
    char s[200];
    int count = 0, i;
 
    printf("Enter the string:\n");
    gets(s);
    i=0;
    while(s[i] != '\0')
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;   
            i++; 
    }
    printf("Number of words in given string are: %d\n", count + 1);
}