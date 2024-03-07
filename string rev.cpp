# include <stdio.h>
# include<string.h>
int main()
{
char s[100],s1[100];
scanf("%[^\n]s",s);
//strrev(s);
//printf("%s",s);
int i,j,t,len=0;
for(i=0;s[i]!='\0';i++)
{
len=len+1;	
}
for (i=len-1;i>=0;i--)
{
for(j=0;j<len;j++)
{
while(j<i)
{
t=s[i];
s[i]=s[j];
s[j]=t;
}
printf("%s",s[j]);
}
}

return 0;
	
}
