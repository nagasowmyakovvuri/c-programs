/* a c program to reverse two numbers*/
#include <stdio.h>
int main()
{
int a,b,c ;
printf ("enter any two values");
scanf("%d%d",&a,&b);
c=b;
b=a;
a=c;
printf ("the numbers after reversing is given by %d and %d ",a,b);
return 0;		
}
