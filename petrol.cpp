# include<stdio.h>
 
int main()
{
int a,s,d,h;
scanf("%d%d%d",&s,&a,&d);
h=(2*d/12)*65/4;
printf("amount per each person is %d\n",h);
if (h%5==0)
{
printf("true");
}
else
{
printf(" false   ");	
}
return 0;
}
