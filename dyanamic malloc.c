# include<stdio.h>
# include<stdlib.h>
int main()
{
int n=5,i;
int *arr;
arr=(int *)malloc(n*sizeof(int));
printf("befor initialisation of array elements\n");
for(i=0;i<n;i++)
{	
printf("%d %d\n",arr+i,*(arr+i));
}
printf("enter array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",arr+i);
//printf("%d-->%d\n",arr+i,*(arr+i));	
}
for(i=0;i<n;i++)
{
printf("%d-->%d\n",arr+i,*(arr+i));	
}	
//free(arr);

int m=2;
realloc(arr,m*sizeof(int));
for(;i<n+m;i++)
{
scanf("%d",arr+i);	
}
for(i=0;i<n+m;i++)
{
printf("%d %d\n",arr+i,*(arr+i));	
}
return 0;	
}

