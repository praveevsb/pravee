#include<stdio.h>
int main()
{
int s,p,k;
printf("enter two numbers:");
scanf("%d%d",&s,&p);
k=s-p;
if(k%2==0)
{
printf("even");
}
else
{
printf("odd");
}
return 0;
}
