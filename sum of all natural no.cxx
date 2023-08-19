#include<stdio.h>
int main()
{
    int i, n, sum=0;
    printf("enter any no.:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum +=i;
    }
    printf("the sum of all given no. is %d",sum);
    return 0;
}