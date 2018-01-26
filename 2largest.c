#include<stdio.h>

int main()
{
	int l1,l2,i,a[10],n;
printf("enter the num");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	
}
l1=a[0];
for(i=0;i<n;i++)
{
	if(a[i]>l1)
	{
	l1=a[i];}
}
	l2=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>l2 && a[i]<l1)
		{
			l2=a[i];
		}}
		printf("frst nd secnd large num is %d %d",l1,l2);
		return 0;
	
		}
	
