/*Write a program to check whether a given number is an even number or an odd 
number without using % operator*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter A number :");
    scanf("%d",&x);
    if(x&2)
    printf("Number is odd:");
    else
    printf("Number is Even");
    return 0;
    

}