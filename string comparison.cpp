# include <stdio.h>
# include<string.h>
int main()
{
char s[100],p[100];
int t;
scanf("%[^\n]s",s);
scanf(" %[^\n]s",p);
t=strcmp(s,p);
printf("%d",t);
return 0;	
}
