# include<stdio.h>
int scr()
{
static int a=10;
 a=a+1;
 printf("%d\n",a);
}
int main()
{
static int k;
scr(k);
scr(k);
scr(k);	
return 0;
}
 

