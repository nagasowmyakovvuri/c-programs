# include<stdio.h>
# include<string.h>
int main()
{
char a[100],b[100];
scanf("%[^\n]s",a);
scanf(" %[^\n]s",b);
int d,l,i,flag=0,count=0;
d=strlen(a);
l=strlen(b);
//printf("%d %d\n",d,l);
if(d==l)
{
for(i=0;i<d;i++)
{
if(a[i]==b[i])
{
count++;	
}
else
break;
}
if(count==d)
{
flag=0;
printf("strings are equal");
}
else
flag=1;
for(i=0;i<d;i++)
{
if(flag==1)
{
 if(a[i]>b[i])
{
printf("a is bigger");
	
}
else
{
printf("b is bigger");
break;	
}	
}
}
}
else
printf("string length is not equal");
return 0;	
}
