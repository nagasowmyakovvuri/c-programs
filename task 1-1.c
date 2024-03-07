# include<stdio.h>
int main()
{
int  a[50][50],t[50][50],r,c;
scanf("%d%d",&r,&c);
int i,j;
printf("enter matrix elements");
for (i=0;i<r;i++)
{
for (j=0;j<c;j++)
{
scanf("%d",&a[i][j]);	
}
}
for (i=0;i<r;i++)
{
for (j=0;j<c;j++)
{
printf("%d",a[i][j]);	
}
printf("\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
t[j][i]=a[i][j];
}	
}
printf("the matrix after transpose is:\n");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
printf("%d\t",t[i][j]);
}
printf("\n");	
}
return 0;	
}
