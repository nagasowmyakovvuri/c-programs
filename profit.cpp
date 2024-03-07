/* a c program to detect profit percent and loss percent*/
# include<stdio.h>
int main()
{
int cp,sp,a,p,perc,l,amount;
printf ("enter cp and sp");
scanf("%d%d",&cp,&sp);
if(cp>sp)
{
printf("loss\n");	
printf("amount=%d-%d\n",cp,sp);
printf("perc=%d*100/%d",amount,cp);	
	}
else
{
printf("profit\n");
printf("a=%d-%d\n",sp,cp);
printf("perc=%d*100/%d",a,sp);	
		}	
return 0;			
	
	
}
