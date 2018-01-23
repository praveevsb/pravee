#include<stdio.h.
int main()
{
int a[10],i,max;
printf("enter 10 values:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<10;i++0
{
if(a[i]>max)
{
max=a[i];
}
}
printf("greatest num is %d",max);
return 0;
}
