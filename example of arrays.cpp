# include<stdio.h>
int main()
{
//int arr[5]={1,2,3,45,5};
//printf("%d\n",arr);
//printf("%d\n",*arr);
//printf("%d\n",*arr+1);
int arr[5],i;
for(i=0;i<5;i++)
{
scanf("%d ",&arr[i]);	
}
for(i=0;i<5;i++)
{
printf("%d ",arr[i]);	
}
return 0;	
}
