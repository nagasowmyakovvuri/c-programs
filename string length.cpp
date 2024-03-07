# include<stdio.h>
# include<string.h>
int main()
{
char str[1000];
scanf(" %[^\n]s",str);
int l;
l=strlen(str);
printf("%d",l);
return 0;	
}
