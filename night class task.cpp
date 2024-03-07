# include<stdio.h>
int main()
{
int n,k;
scanf("%d %d",&n,&k);
int a[n],b[k],i,c[20],j; 
for(i=0;i<n;i++)
{
scanf("%d "&a[i]);	
}
for(i=0;i<k;i++)
{
scanf("%d ",&b[i]);	
}
for(i=0;i<n;i++)
{
for(j=0;j<k;j++)
{
if(a[i]==a[j])
{
flag=0;
break;	
}	
}
if(flag==0)
{
for(p=0;p<n;p++)
{
if(a[i]!=c[p])
c[p]=a[i];	
}	
}	
}
for(p=0;p<)
printf("%d ",c[p]);
return 0;	
}
