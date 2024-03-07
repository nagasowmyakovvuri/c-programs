# include<stdio.h>
int main()
{
int i,j;
scanf("%d%d",&i,&j);
int a[i][j],k,l;
for(k=0;k<i;k++)
{
for(l=0;l<j;l++)
{
scanf("%d ",&a[k][l]);
}	
}
for(k=0;k<i;k++)
{
for(l=0;l<j;l++)
{
printf("%d ==>a[%d][%d]",a[k][l],k,l);
}
}
return 0;
}
