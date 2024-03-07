# include<stdio.h>
int main()
{
int a,b,factorial=1;
printf ( "enter b value");
scanf("%d",&b);
for(a=1;a<=b;a++)
{
factorial *=a;
}
printf("%d",factorial);		
return 0;		
}
