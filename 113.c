#include<stdio.h>
int main()
{
int a[100],N,K,i,t=0;
printf("ENTER THE NUMBERS");
scanf("%d%d",&N,&K);
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<N;i++)
{
    
    
        if(K==a[i])
        {
            t++;
        }
}

printf("repetition is %d",t);
return 0;
}
