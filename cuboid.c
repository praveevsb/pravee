#include<stdio.h>
int main()
{
float l,b,h;
float surf,vol;
printf("enter the length,breadth,height");
scanf("%f%f%f",&l,&b,&h);
surf=2*l*b+2*l*h+2*b*h;
vol=l*b*h;
printf("surface area is %.4f",surf);
printf("volume is %.4f",vol);
return 0;
}
