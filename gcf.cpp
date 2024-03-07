# include<stdio.h>
int main()
{
int n;
scanf("%d"&n);
int a[n],i,min,gcf,j;
for(i=0;i<n;i++)
{
scanf("%d ",a[i]);	
	}
min=a[0];
if(a[i]<min)
{
min=a[i];	
		}
for(i=0;i<n;i++)
{
for(j=min;j>0;j--)
{
if(a[i]%j==0)
{
	gcf==j;
	break;
}
}
		}
printf("%d",gcf);
return 0;		
}
