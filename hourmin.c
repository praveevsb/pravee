#include<stdio.h>
int main()
{
int time,hour=0,min=0;
scanf("%d",&time);
hour=time/60;
min=time%60;
printf("%dhour:%dmin",hour,min);
return 0;
}
