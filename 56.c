#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,l=0;
    char a[77];
    printf("enter the character");
    scanf("%s",a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(((a[i]>='a'||a[i]<='z')||(a[i]>='A'||a[i]<='Z'))&&(a[i]>='0' && a[i]<='9'))
        {
        l=1;
        break;
    }}
    if(l==1)
    printf("yes");
    else
    printf("noo");
 
 
 
    return 0;
}
