# include<stdio.h>
int main()
{
int a=100;
int *p;
p=&a;
printf("%d\n",&a);
printf("%d\n",p);
printf("%d",*p);
return 0;	
}
