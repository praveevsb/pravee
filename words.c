#include<stdio.h>
#include<string.h>
int main()
{
int i,count=0;
char s[200];
printf("enter the string:");
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=' ')
count++;
}
printf("no of words is %d\n",count);
return 0;
}
