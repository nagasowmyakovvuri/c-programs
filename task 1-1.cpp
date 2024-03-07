# include<stdio.h>
int main()
{
int r,c;
scanf("%d%d",&r,&c);
int i,j,a[r][c];
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
return 0;	
}
