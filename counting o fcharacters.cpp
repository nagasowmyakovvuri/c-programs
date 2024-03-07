# include<stdio.h>
int main()
{
char str[1000];
scanf("%[^\n]s",str);
int i,u=0,l=0,d=0,s=0,w=0;
for(i=0;str[i]!='\0';i++)
{
if(str[i]>=97&&str[i]<=122)
u=u+1;
else if(str[i]>=65&&str[i]<=90)
l=l+1;
else if(str[i]>=48&&str[i]<=57)
d=d+1;
else if(str[i]==32)
w=w+1;
else
s=s+1;	
}
printf(" no of lower cases =%d\n",u);
printf("no of upper cases =%d\n",l);
printf("no of digits =%d\n",d);
printf(" no of symbols=%d\n",s);
printf("No of spaces=%d",w);
return 0;	
}
