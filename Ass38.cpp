 //Write a program to check whether a given year is a leap year or not
 #include<stdio.h>
 int main()
 {
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if(year%4)
       printf("Not a leap year:");
    else if(year%100)
       printf("Leap year:");
    else if(year%400)
      printf("Not a Leap year");
      else
      printf("Leap year");
      return 0;
 }
