#include<stdio.h>
int main()
{
int n,a[100],i,min;
printf("enter the number:");
scanf("%d",&n);
printf("enter the array values:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
min=a[i];
}
printf("greatest num is %d",min);
return 0;
}
