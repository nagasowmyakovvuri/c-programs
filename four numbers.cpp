/* a c program to detect large number of four numbers */
# include <stdio.h>
int main()
{
int a,b,c,d;
printf("enter any four values");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b&&a>c&&a>d)
{
printf("a is large");	
	}
else if(b>a&&b>c&&d>a)
{
	printf("b is large");
		}
else if(c>a&&c>b&&c>d)
{
	printf("c is large");
}
else
{
	printf("d is large");
}
return 0;		
	
	
}
