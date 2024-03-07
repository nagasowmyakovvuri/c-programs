# include<stdio.h>
int main()
{
char str[100];
//scanf("%[A-Z,a-z, ]s",str);
scanf(" %[^\n]s",str);
printf("%s",str);	
}

