#include<stdio.h>
int main()
{
  int n1,n2,n3;
  printf("enter 1st no.");
  scanf("%d",&n1);
  printf("enter 2nd no.");
  scanf("%d",&n2);
  printf("enter 3rd no.");
  scanf("%d",&n3);
  if(n1>n2 && n1>n3)
  printf("given no. is greatest no. among three %d",n1);
  else if(n2>n1 && n2>n3)
  printf("given no. is greatest no. among three %d",n2);
  else
  printf("given no. is greatest no. among three %d",n3);
    return 0;
}