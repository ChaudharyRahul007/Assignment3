/*Write a program to print greater between two numbers. Print one number of both are 
the same*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Two number:");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is a greater No:",a);
    }
    else if(b>a)
    {
        printf("%d is a greater No:",b);
    }
    else
      {
        printf("%d and %d are the same",a,b);
      }
      return 0;
}