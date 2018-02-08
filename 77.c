#include<stdio.h>
int main()
{
int num,i;
scanf("%d",&num);
printf("enter the number %d",num);
for(i=0;i<=num;i++)
{
if(num%i==0)
{
printf("%d",i);
}
}
return 0;
}
