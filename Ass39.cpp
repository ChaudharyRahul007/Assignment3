/*Write a program to find the greatest among three given numbers. Print number once 
if the greatest number appears two or three times.*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three Number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
     printf("%d is a greatest no",a);
     else if(b>c)
     printf("%d is a greater no",b);
     else 
      printf("%d is a greater no",c);
      return 0;

}