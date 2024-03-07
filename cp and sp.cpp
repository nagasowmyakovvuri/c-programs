/* a  c program to find profit or loss*/
# include<stdio.h>
int main()
{
int cp,sp;
printf ("enter any two values");
scanf("%d%d",&cp,&sp);
if(cp<sp)
{
printf("profit");	
}	
else if(cp>sp)
{
printf("loss");	
}
else
{
	printf("neither prifit nor loss");

}
return 0;	
}
