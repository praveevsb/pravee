#include<stdio.h>
#include<string.h>
int main()
{
char ch[100];int n,i;
printf("enter the string");
scanf("%s",&ch);
n=strlen(ch);
for(i=0;i<n;i++)
{
if((ch[i]==0)||(ch[i]==1))
{
printf("yess")
}
    
}

printf("noo");

return 0;
}
