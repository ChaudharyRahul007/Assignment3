//Write a program to check whether a given number is a three-digit number or not
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x>=99&&x<=999)
     printf("Number is three digit no :");
     else
     printf("Number is not three digit :");
     return 0;
}