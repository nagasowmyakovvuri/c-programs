# include<stdio.h>
int main()
{
int a,b,c,m;
scanf("%d%d%d",&a,&b,&c);
if(a!=7&&b!=7&&c!=7)
{
m=a*b*c;
printf("%d",m);
}
if(a==7||b==7||c==7)
{
if(a==7)
{
m=b*c;
printf("%d",m);
}
else if(b==7)
{
m=c;
printf("%d",m);
}
else
{
printf("-1");
}
}		

return 0;
}
