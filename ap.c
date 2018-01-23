#include<stdio.h>
int main()
{
int n,a,d,ap;
printf("enter the num:");
scanf("%d%d%d",&n,&a,&d);
ap=(n/2)*(2*a+(n-1)*d);
printf("the value is %d",ap);
return 0;
}
