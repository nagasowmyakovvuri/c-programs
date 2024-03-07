#include<stdio.h>
int c=1;
int binary_recursion(int *a,int L,int H,int se)
{
	if(L>H)
	{
		return -c;
	}
	int M;
    M=(L+H)/2;
	if(se==a[M])
	{
		return c ;
	}
	if(se>a[M])
	{
		L=M+1;
	}
	if(se<a[M])
	{
		H=M-1;
	}
	c++;
return binary_recursion(a,L,H,se);
}

int main()
{
	int n,count;
	scanf("%d",&n);
	int a[n],i,se;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&se);
	count=binary_recursion(a,0,n-1,se);
	if(count>0)
	{
		printf("%d True",count);
	}
	else
	{
		printf("%d False",-count);
	}
	return 0;
}
