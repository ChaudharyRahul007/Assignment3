//Write a program to check whether a given number is divisible by 7 or divisible by 3
#include<stdio.h>
int main()
{
    int x;
    printf("Enter No to check Whether divisible 3 or divisible 7:");
    scanf("%d",&x);
    if(x%3==0 & x%7==0)
    {
        printf("%d is divisible by 3 or 7",x);
    }
    else 
    {
        printf("%d is not  Divisible by 3 or 7",x);
    }
    return 0;
}