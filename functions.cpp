# include <stdio.h>
float pro(float x,float y)
{
float c;	
 c=x*y;
 
return c;	
}
int main()
{
float a,b,product;
scanf("%f%f",&a,&b);
product=pro(a,b);
printf("%.2f",product);
return 0;	
}
