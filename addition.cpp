#include<stdio.h>
int main()
{
int a=1,b,sum=0;
printf("enter b value");
scanf("%d",&b);
while(a<=b)
{	
sum+=a;
a++;
}
printf ("%d",sum);		
return 0;	
}
