#include<stdio.h>
int L=0;
int binary_recursion(int*a,int n,int se)
{
	int H=n-1;
	if(L>H)
	{
		return 0;
	}
	int M;
	M=(L+H)/2;
	if(se==a[M])
	{
		return 1;
	}
	if(se>a[M])
	{
		L=M+1;
	}
	else
	{
		n=M;
	}
	return binary_recursion(a,n,se);
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,se;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&se);
	if(binary_recursion(a,n,se)==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}
