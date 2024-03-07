# include<stdio.h>
int is_prime(int x)
{
int i;
if(x==1)
{
return 0;	
}
for(i=2;i*i<=x;i++)
{
if(x%i==0)
{
return 0;	
}	
}
return 1;		
}
int main()
{
int y,r,rev=0;
scanf("%d",&y);
if(is_prime(y)==1)
{
while(y!=0)
{
r=y%10;
rev=rev*10+r;
y=y/10;
}


if(is_prime(rev)==1)
{
printf("circular prime");	
}
else
{
printf("not a circular prime");	
}
}
else 
{
printf("Not a prime");
}
return 0;		
}

