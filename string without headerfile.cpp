#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        int si=0,i;
        char s1[100];
        scanf("%[^\n]s1",s1);
        for (i=0;s1[i]!='\0';i++)
        {
            printf("hi");
            if(int(i)>=48 && int(i)<=57)
            {
                printf("False\n");
                si=1;
            }
            
        }
    
    if (si==0)
    {
        printf("True\n");
    }
    n-=1;
    }
    return 0;
}/*# include<stdio.h>
int main()
{
char s1[100],s2[100];
scanf("%[^\n]s",s1);
scanf(" %[^\n]s",s2);
int i,j,len1,len2;
for (i=0;s1[i]!='\0';i++)
{
len1=i++;	
}
for(i=0;s2[i]!=0;i++)
{
len2 =i++;	
}
if (len1==len2)
{
for(i=0;i<len1;i++)
{
if(s1[i]==s2[i])
{
printf("equal");
break;
}
else
{
printf("not equal");
break;
}
}
}
else
{
printf("not equal");
}
return 0;	
}*
