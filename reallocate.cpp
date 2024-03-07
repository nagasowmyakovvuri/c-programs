# include<stdio.h>
# include<stdlib.h>
int main()
{
int *arr;
arr=(int*)malloc(sizeof(int));
char ch;
int i=0;
while(1)
{
printf("enter array element");
scanf("%d",arr+i);
printf("do you want to enter more elements(y/n)");
scanf("%c",&ch);
if(ch=='y')
{
realloc(arr,sizeof(int));
scanf("%d",arr);
i++;	
}
else
{
break;
}		
}
int j=0;
for (j=0;j<i;j++)
{
printf("%d %d",arr+i,*(arr+i));	
}
return 0;	
}
