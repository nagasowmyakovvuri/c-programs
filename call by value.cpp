#include<stdio.h>
int scr(int a,int b)
{
int t;
t=a;
a=b;
b=t;
printf("%d %d",a,b);	
}
int main()
{
int a=10,b=20;
scr(a,b);
printf("%d %d\n",a,b);
return 0;	
}

