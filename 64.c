#include<stdio.h>
int main()
{
int n1,n2,sum;
printf("enter two numbers:");
scanf("%d\t%d",&n1,&n2);
sum=n1+n2;
if(sum%2==0)
{
printf("even");
}
else
{
printf("odd");
}
return 0;
}
