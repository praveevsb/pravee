#include<stdio.h>
int main()
{
    int a,b;
    printf("before swapping");
    scanf("%d%d",&a,&b);
    printf("after swapping");
    a=a^b;
    b=b^a;
    a=a^b;
    printf("%d%d",a,b);
    return 0;
}
