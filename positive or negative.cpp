/*a c program to detect whether the given number is positive or negative*/
#include<stdio.h>
int main()
{
int a;
printf ("enter any one value");
scanf("%d",&a);
if(a>0)
{
printf("a is positive number");	
}
else if(a<0)
{
printf("a is negative number");	
}		
else
{
	printf("neither positive nor negative");
}	
return 0;		
}
