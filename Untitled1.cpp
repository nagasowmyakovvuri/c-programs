/* a c program to find the area of the circle*/
#include <stdio.h>
int main()
{
int r;
float pie=3.14,area,perimeter;
printf("enter the radius of circle");
scanf("%d",&r);
area=pie*r*r;
perimeter=2*pie*r;
printf("the area and the perimeter of the circle is %f and %f",area,perimeter);	
return 0;	
}
