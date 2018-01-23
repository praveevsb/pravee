#include<stdio.h>
int main()
{
int hr,hr1,hr2,min1,min2,min;
printf("first time:");
scanf("%d%d",&hr1,&min1);
printf("second time");
scanf("%d%d",&hr2,&min2);
hr=hr1-hr2;
min=min1-min2;
printf("rem hour is %d and rem min is %d",hr,min);
return 0;
}
