/* a c program to find the area and perimeter of square*/
#include<stdio.h>
int main()
{
int s,a,p;
printf("enter the side length of the square");
scanf("%d",&s);
a=s*s;
p=4*s;
printf("the area and the perimeter is %d and %d",a,p);
return 0;		
}
