#include<stdio.h>
void main()
{
    char c1[100],c2[150];
    int i,j,count=0;
    printf(" enter the first string");
    scanf(" %s",c1);
    printf("enter the second string");
    scanf(" %s",c2);
    for(i=0;c1[i]!='\0';i++)
    {
        count++;
    }
    i=count;
     for(j=0;c2[j]!='\0';++j,++i)
    {
        c1[i]=c2[j];
    }
    
     printf("\n the string is%s",c1);
}
