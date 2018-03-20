#include<stdio.h>
int main()
{
    int a,b;
    printf("before swapping");
    scanf("%d%d",&a,&b);
    printf("after swapping");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\t%d",a,b);
    return 0;
}
