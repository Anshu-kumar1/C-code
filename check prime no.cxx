#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a no. :");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    if(n%i==0)
    break;
    if(n==i)
    printf("the no. is prime");
    else
    printf("the no. is not prime");
    
    return 0;
}