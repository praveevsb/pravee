#include<stdio.h>
int main()
{
int N,K,i,t,j;
printf("ENTER THE NUMBERS");
scanf("%d%d",&N,&K);
for(i=N+1;i<K;i++)
{
    t=0;
    for(j=1;j<K;j++)
    {
if(i%j==0)
{
    t++;
}}
if(t==2)
{
  printf("%d\n",i);
}}


return 0;
}
