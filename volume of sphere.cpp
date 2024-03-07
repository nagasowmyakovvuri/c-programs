/* a c program to find the volume of the sphere*/
# include <stdio.h>
int main()
{
int r;
float pie=3.14,volume;
printf("enter the radius of the sphere");
scanf("%d",&r);
volume=4*pie*r*r*r/3;
printf("the volume of the sphere is %f",volume);
return 0;	
}
