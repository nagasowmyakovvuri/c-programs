# include<stdio.h>
int rev( int x)
{
int rev=0,r;
while(x!=0)
{
r=x%10;
rev=rev*10+r;
x=x/10;	
}
return rev;
}

int main()
{
int a;
scanf("%d",&a);
for(i=1;i<100;i++)
{
if(i==rev(i))
printf("palindrome");
else
printf("not a palindrome");

return 0;	
}
	

