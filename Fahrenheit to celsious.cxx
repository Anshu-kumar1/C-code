#include<stdio.h>
int main()
{
    float fahrenheit,celcius;
    printf("enter temp. in fahrenheit :");
    scanf("%f",&fahrenheit);
    celcius=(fahrenheit-32)*5.0/9.0;
    printf("temperature in celcius is %f",celcius);
    return 0;
}