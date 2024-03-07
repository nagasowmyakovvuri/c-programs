# include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n],i;
for(i=0;i<n;i++)
{
scanf("%d ",&a[i]);
if (i%2!=0)
{
printf("%d ",a[i]);	
}
}
//for(i=n-1;i>=0;i--)
//{
//printf("%d\n",a[i]);
//}
return 0;
}
