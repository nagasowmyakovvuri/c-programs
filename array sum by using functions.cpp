# include<stdio.h>
int array_sum(int a[],int s)
{
int i,sum=0;
for(i=0;i<s;i++)
{
sum+=a[i];	
}
return sum;	
}
int array_product(int a[],int size)
{
int i,pro=1;
for(i=0;i<size;i++)
{
pro*=a[i];	
	}
return pro;		
}
int main()
{
int n,res,p;
scanf("%d",&n);
int arr[n],i;
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);	
	}
res=array_sum(arr,n);
p=array_product(arr,n);
printf("%d",res);
printf("\n");
printf("%d",p);
return 0;		
}
