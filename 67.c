#include<stdio.h>
void main()
{
int c,d;
scanf("%d",&c);
if(c%10==0)
printf("%d",c);
else
d=c+(10-(c%10));
printf("The nearest of 10 is:%d",d);
}
