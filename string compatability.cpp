# include<stdio.h>
# include<string.h>
int main()
{
char s1[100],s2[100],s3[100];
scanf("%[^\n]s",s1);
scanf(" %[^\n]s",s2);
//strcat(s1,s2);
//printf("%s",s1);
int len=0,j,i;
for(i=0;s1[i]!='\0';i++)
{
len=len+1;	
}
j=len;
for(i=0;s2[i]!='\0';i++)
{
s1[j++]=s2[i];	
}
s1[j]='\0';
printf("%s",s1);


return 0;	
}
