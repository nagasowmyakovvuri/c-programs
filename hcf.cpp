# include<stdio.h>
int main()
{
int a,b,min,hcf;
scanf("%d%d",&a,&b);
int i;
min=a;
if(min>b)
min=b;
for(i=1;i<a;i++)
{
if(a%i==0&&b%i==0)
hcf=i;
}
printf("%d",hcf);
return 0;		
}
