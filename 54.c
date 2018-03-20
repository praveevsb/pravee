#include<stdio.h>
int main()
{
    int a;
   printf("enter the number");
   scanf("%d", &a);
   if(a%2==0)
   {
       printf("even number is %d",a);
       
   }
   else
   {
       printf("nearest even number is %d",a-1);
   }
   
   
   
   
   
   
   
   
    return 0;
}
