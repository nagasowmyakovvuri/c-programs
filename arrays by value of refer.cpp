# include<stdio.h>
int scr(int *arr)
{
arr[0]=56;	
}
int main()
{
int arr[5]={1,2,3,4,5};
scr(arr);
printf("%d ",arr[0]);
return 0;	
}
