#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year for check the given no. is leap year or not :");
    scanf("%d",&year);
    if(year%400==0 || year%4==0 && year%100!=0)
    {
        printf("Given year is leap year");
    }
    else
    {
        printf("Given year is not leap year");
    }
    return 0;
}