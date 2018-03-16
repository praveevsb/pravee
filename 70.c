#include<stdio.h>
int main()
{
int num,count=0,x=1,pow=2;
scanf("%d",&num);
while(num!=1)
{
num=num/2;
count++;
}
for(int i=0;i<count+1;i++)
{
x=x*pow;
}
printf("%d",x);
return 0;
}
