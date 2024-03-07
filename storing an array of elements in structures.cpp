# include<stdio.h>
struct learners
{
int pin;
char name[20];
float per;	
};
int main()
{
int n;
scanf("%d",&n);
struct learners s[n];
int i;
for (i=0;i<n;i++)
{
printf("enter %d pin number\t",i+1);
scanf("%d",&s[i].pin);
printf("enter the name Of %d\t",i+1);
scanf("%s",s[i].name);
printf("enter the percentage Of %d\t",i+1);
scanf("%f",&s[i].per);	
}
printf("\n");
printf("pin number \t\t\tname\t\t\tpercentage\n");
printf("----------------------------------\n");
for(i=0;i<n;i++)
{
printf("%d\t\t\t%s\t\t\t%.2f\n",s[i].pin,s[i].name,s[i].per);	
}
return 0;
}
