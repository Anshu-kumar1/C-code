#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,CI;
    printf("enter principle amount :");
    scanf("%f",&p);
    printf("enter rate :");
    scanf("%f",&r);
    printf("enter time :");
    scanf("%f",&t);
    CI=p*(pow((1+r/100),t));
    printf("Compound Interest : %f",CI);
    
    return 0;
}