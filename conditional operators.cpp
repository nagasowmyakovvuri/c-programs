# include<stdio.h>
int main()
{
int a,b,c,res;
scanf("%d%d%d",&a,&b,&c);
//res=a>b?a:b;
res=a>b?((a>c)?a:c):b>a?((b>c)?b:c);;
printf("%d",res);
return 0;	
}
