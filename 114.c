#include<stdio.h>
int main()
{
int a[100],N,K,i,count=0;
printf("ENTER THE NUMBERS");
scanf("%d%d",&N,&K);
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=N;i++)
{
if(a[i]%2!=0)
{
    count++;
}
if(count==K)
{
printf("%d",a[i]);
}
}
return 0;
}
