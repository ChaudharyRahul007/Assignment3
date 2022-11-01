//Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a alphabet to check uppercase or lowercase:");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90 )
    {
    printf("You Have Enter Uppercase Latter:");
    }
    else if(ch>=97 && ch<=122)
    {
    printf("You Have Enter Lowercase Latter:");
    }
      return 0;
}