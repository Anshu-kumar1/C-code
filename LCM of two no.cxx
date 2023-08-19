#include<stdio.h>
int main()
{
    int a,b,L;
    printf("enter first no. :");
    scanf("%d",&a);
    printf("enter second no.:");
    scanf("%d",&b);
    for(L=1;L<a*b;L++)
    
        if(L%a==0 && L%b==0)
        break;
        {
            printf("LCM of two no. is %d",L);
        }
    
    return 0;
}