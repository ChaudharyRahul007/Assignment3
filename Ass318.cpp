/*Write a program which takes the month number as an input and display number of 
days in that month*/
#include<stdio.h>
int main()
{
    int month;
    printf("Enter Month No:");
    scanf("%d",&month);
    if(month==1)
    {
        printf("Jan=31 Days");
    }
    else if(month==2)
    {
        printf("Feb=28 Days");
    }
    else if(month==3)
    {
        printf("Mar=31 Days");
    }
    else if(month==4)
    {
        printf("April=30 Days");
    }
    else if(month==5)
    {
        printf("May=31 Days");
    }
    else if(month==6)
    {
        printf("Jun=30 Days");
    }
    else if(month==7)
    {
        printf("Jul=31 Days");
    }
    else if(month==8)
    {
        printf("Aug=30 Days");
    }
    else if(month==9)
    {
        printf("Sep=31 Days");
    }
    else if(month==10)
    {
        printf("Nov=30 Days");
    }
    else if(month==11)
    {
        printf("Dec=31 Days");
    }
    else 
    {
        printf("Invalid Enter:");
    }  
    return 0;

}