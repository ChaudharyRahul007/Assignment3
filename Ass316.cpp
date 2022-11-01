/*Write a program to check whether a given character is an alphabet (uppercase), an 
alphabet (lower case), a digit or a special character*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Characters:");
    scanf("%c",&ch);
    if(ch>=33 && ch<=47)
    {
        printf("You Have Enter Special Character:");
    }
   else if(ch>=48 && ch<=57)
    {
        printf("You Have Enter Digit:");
    }
    else if(ch>=65 && ch<=90 )
    {
    printf("You Have Enter Uppercase Latter:");
    }
    else if(ch>=97 && ch<=122)
    {
    printf("You Have Enter Lowercase Latter:");
    }
      return 0;
}