# include<stdio.h>
int main()
{
int r,c;
scanf("%d%d",&r,&c);
int a[r][c],b[r][c],d[r][c],e[r][c],res[r][c],i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
d[i][j]=a[i][j]+b[i][j];
//printf(" %d ",d[i][j]);	
}
//printf("\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
e[i][j]=a[i][j]-b[i][j];
//printf(" %d ",e[i][j]);	
}
//printf("\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
res[i][j]=d[i][j]+e[i][j];
printf(" %d ",res[i][j]);	
}
printf("\n");
}
return 0;	
}
