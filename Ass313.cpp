//Write a program to check whether a given number is divisible by 3 and divisible by 2
#include<stdio.h>
int main()
{
    int x;
    printf("Enter No to check Whether divisible 3 and divisible 2:");
    scanf("%d",&x);
    if(x%3==0)
    {
        printf("%d is divisible by 3",x);
    }
    else if(x%2==0)
    {
        printf("%d is Divisible by 2",x);
    }
    return 0;
}