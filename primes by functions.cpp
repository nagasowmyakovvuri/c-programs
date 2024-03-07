# include <stdio.h>
 int is_prime(int n)
{
 int i;
 if(n==1)
 {
 return 0;		 
 }	
for(i=2;i*i<=n;i++)
{
if(n%i==0)
 {
return 0;	
}
}
return 1;	
 }
 void primes_in_a_range(int a,int b)
 {
 int i;
 for(i=a;i<=b;i++)
 {
 if(is_prime(i)==1)
 printf("%d ",i);
	
}
printf("\n");	
 }
 void composites_in_a_range(int x,int y)
 {
int i;
 for(i=x;i<=y;i++)
 {
  if(is_prime(i)==0)
  {
  printf("%d  ",i );
}	
 }	
 }
int main()
{
int u,v,choice,n,m,w;
printf("enter your choice");
scanf("%d",&choice);
if(choice==1)
{
printf("enter a  number");
scanf("%d",&n);
if(is_prime(n)==1)
printf("prime");
else
printf("not a prime");
}
if (choice==2)
{
printf("enter range");	
scanf("%d%d",&u,&v);
primes_in_a_range(u,v);
}
if(choice==3)
{
printf("enter range");
scanf("%d%d",&m,&w);
composites_in_a_range(m,w);
}
return 0;	
}


