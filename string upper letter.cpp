# include<stdio.h>
#include<string.h>
int main()
{
char s1[100];
scanf ("%[^\n]s",s1);
//strupr(s1);
//printf("%s",s1);
strlwr(s1);
printf("%s",s1);
return 0;	
}
