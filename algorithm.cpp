# include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
while(a!=b)
if(a>b)
{
a=a-b;
printf(" %d is the gcf ",a);
}
if(b>a)
{
b=b-a;			
printf("%d is gcf",b);
}
return 0;	
}
