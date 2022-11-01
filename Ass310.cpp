/*Write a program which takes the cost price and selling price of a product from the 
user. Now calculate and print profit or loss percentage*/
#include<stdio.h>
int main()
{
    int cp,sp,amt;
    printf("Enter a cost price of the product:");
    scanf("%d",&cp);
    printf("Enter a selling price of the product:");
    scanf("%d",&sp);
    if(sp>cp)
    {
        amt=sp-cp;
        printf("profit=%d",amt);
    }
        else
        {
        amt=cp-sp;
        printf("Loss=%d",amt);
        }
        return 0;
}