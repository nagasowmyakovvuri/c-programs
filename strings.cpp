# include<stdio.h>
int main()
{
int s1[50],s2[50];
scanf("%[^\n]s",s1[50]);
scanf(" %[^\n]s",s2[50]);
int i,j,len1,len2,s=0;
for(i=0;s1[i]!=0;i++)
{
len1=i++;
}
for(i=0;s2[i]!=0;i++)
{
len2=i++;
}
if(len1==len2)
{
for(i=0;i<len1;i++)
{
for(j=0;j<len1;j++)
{
if(s1[i]!=s2[j])
{
s=0;
break;
}	
}
}
if(s==0)
printf("strings are not equal");
else
printf("strings are equal");
}
else 
printf("strings are not equal");
return 0;
}
