# include<stdio.h>
int c(long long int x)
{
int count=0;
while(x!=1)
{
if(x%2==0)
{
x=x/2;	
}
else
{
x=3*x+1;	
}
count++;
	}
return count;		
}
int main()
{
long long int a,b,i,max=0,res,result;
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
res=c(i);
if(res>max)
{
max=res;
result=i;	
}	
}
printf("%d",result);
return 0;	
}
