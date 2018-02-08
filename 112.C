#include<stdio.h>
int main()
{
int N,K,a[100],i;
scanf("%d",&N);
for(i=0;i<=N;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&K);
for(i=0;i<=N;i++)
{
if(a[i]==N)
{
printf("yes");
}
else
{
printf("no");
}
}
return 0;
}
