#include<stdio.h>
#include<string.h>
void main()
{
char ch1[100],ch2[100];
int i,j,m,n;
printf("enter the string");
scanf("%s %s",ch1,ch2);
m=strlen(ch1);
n=strlen(ch2);
if(m>n)
{
    printf("%s",ch1);
}
else
{
    printf("%s",ch2);
}
}
