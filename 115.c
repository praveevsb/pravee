#include<stdio.h>
int main()
{
int a[100],N,K,i,t,j;
printf("ENTER THE NUMBERS");
scanf("%d%d",&N,&K);
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<N;i++)
{
    for(j=i+1;j<N;j++)
    {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
}
}
printf("%d samllest num is %d",K,a[K-1]);
return 0;
}
