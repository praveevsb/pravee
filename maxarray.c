#include<stdio.h>
int main()
{
int n,a[100],i,max;
printf("enter the number:");
scanf("%d",&n);
printf("enter the array values:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
max=a[i];
}
printf("greatest num is %d",max);
return 0;
}
