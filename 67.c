#include<stdio.h>
void main()
{
int a,b;
scanf("%d",&a);
if(a%10==0)
printf("%d",a);
else
b=a+(10-(a%10));
printf("The nearest of 10 is:%d",b);
}
