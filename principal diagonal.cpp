# include<stdio.h>
# include<math.h>
int main()
{
int r,c;
scanf("%d%d",&r,&c);
int a[r][c],sum=0,p=0,d,i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}

for(i=0,j=c-1;i<r,j>=0;i++,j--)
{
p=p+a[i][j];

//printf("%d",p);
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(i==j)
{
sum=sum+a[i][j];
//printf("%d",sum);
}
}
}

d=abs(sum-p);
printf("%d",d);
return 0;	
}
