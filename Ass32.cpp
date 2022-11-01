//Write a program to check whether a given number is divisible by 5 or no
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number:");
    scanf("%d",&x);
    if(x%5==0)
            printf("A Number is divisible by 5:");
    else
            printf("A number is not divisible by 5:");
    return 0;

   
      }