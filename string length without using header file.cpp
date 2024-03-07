# include<stdio.h>
int main()
{
char str[100];
scanf("%[^\n]s",str);
int len=0,i;
for(i=0;str[i]!='\0';i++)
{
len=len+1;
}
printf("%d",len);
return 0;	
}
