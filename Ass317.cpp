/*Write a program which takes the length of the sides of a triangle as an input. Display 
whether the triangle is valid or not. */
#include<stdio.h>
int main()
{
    int a,b,c,flag=0;
    printf("Enter triangle sides:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
       flag=((b+c)>a);
    }
    else if(b>c)
    {
        flag=((a+c)>b);
    }
    else{
        flag=((a+b)>c);
    }
    if(flag)
    {
        printf("Valid Tringle");
    }
    else{
    printf("Invalid Tringle");
    }
    return 0;
}