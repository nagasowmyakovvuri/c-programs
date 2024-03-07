# include<stdio.h>
int main()
{
int a,b,x,i,count=1;
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
while(i!=1)
{
if(i%2==0)
{
i=i/2;
//printf("%d " ,i);	
}
else
{
i=3*i+1;
//printf("%d ",i);
}	
count=1+count;
}
int x=1;
if(count>x)
x==count;
}
//printf("\n");
printf("%d",x);	

return 0;	
}
