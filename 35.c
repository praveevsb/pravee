#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0,len;
    char a[77];
    printf("enter the character");
    scanf("%s",a);
    len=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            c++;
        }
    }
    printf("count is %d ",c);
 
    return 0;
}
