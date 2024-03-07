# include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("hello .txt","r");
if (fp==0)
printf("file not found");
else
printf ("file opened succesfully");
	
}
