# include <stdio.h>
# include<string.h>
int main()
{
char s[100],k[100];
scanf("%[^\n]s",s);
//strrev(s);
//printf("%s",s);
int i,j,len=0;
char t;
for(i=0;s[i]!='\0';i++)
{
len=len+1;	
}
//printf("%d",len);
j=len;

for (i=0;i<len;i++)
{

while(i<j)
{
t=s[i];
s[i]=s[j--];
s[j--]=t;
}
printf("%s",s[i]);
}
return 0;
	
}
