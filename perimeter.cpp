/* a c program to find the area and perimeter of the rectangle*/
# include<stdio.h>
int main()
{
int l,b,a,p;
printf("enter any two values");
scanf("%d%d",&l,&b);
a=l*b;
p=2*(l+b);
printf("the area and the perimeter is %d and %d",a,p);
return 0;	
	
}
