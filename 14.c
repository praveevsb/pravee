#include<stdio.h>
int main()
{
int N,K,i;
printf("ENTER THE NUMBERS");
scanf("%d%d",&N,&K);
for(i=N+1;i<K;i++)
{
if(i%2!=0)
{
    printf("%d",i);
}
}


return 0;
}
