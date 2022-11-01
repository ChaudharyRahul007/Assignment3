/*Write a program to take marks of 5 subjects from the user. Assume marks are given 
out of 100 and passing marks is 33. Now display whether the candidate passed the 
examination or failed.*/
#include<stdio.h>
int main()
{
    int hindi,Eng,Math,Phy,Chem;
    printf("Enter a five subject No:");
    scanf("%d%d%d%d%d",&hindi,&Eng,&Math,&Phy,&Chem);
    if(hindi<33)
    {
    printf("Hindi subject Failed = %d",hindi);
    }
    else if(Eng<33)
    {
    printf("English subject failed =%d",Eng);
    }
    else if(Math<33)
    {
    printf("Maths subject failed=%d",Math);
    }
    else if(Phy<33)
    {
    printf("Physics subject failed=%d",Phy);
    }
    else if(Chem<33)
    {
    printf("Chemistry subject failed=%d",Chem);
    }
    else 
    {
    printf("All subject pass:");
    }
    printf("\nhindi=%d  Eng=%d  Math=%d  Phy=%d  Chem=%d",hindi,Eng,Math,Phy,Chem);
    return 0;
}