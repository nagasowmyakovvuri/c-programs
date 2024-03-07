# include<stdio.h>
int main()
{
int n,r,s=0,c;
scanf("%d",&n);
c=n;
while(n!=0)
{
r=n%10;
s=s*10+r;
n=n/10;
}
if(c==s)
{
printf("palindrome");	
}
else
{		
printf("not a palindrome");
}
return 0;	
}
