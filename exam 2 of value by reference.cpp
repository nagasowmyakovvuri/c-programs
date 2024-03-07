# include<stdio.h>
int mon(int *p)
{
*p=*p+1;	
}
int main()
{
int a=10;
mon(&a);
printf("%d",a);
return 0;	
}
