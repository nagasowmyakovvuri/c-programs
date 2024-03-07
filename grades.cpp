/* a c program to give grades*/
# include <stdio.h>
int main()
{
int m;
printf("enter marks");
scanf("%d",&m);
if(m>100)
{
	printf("invalid marks");
	}
else if(m>=90&&m<100)
{
	printf("a grade");
		}
else if(m>=80&&m<90)
{
	printf("b grade");
}
else if(m>=70&&m<80)
{
	printf("c grade");
}
else if(m>=60&&m<80)
{
	printf("d grade");
}
else if(m>=50&&m<60)
{
	printf("e grade");
				}
else 
{
	printf("fail");
}								
return 0;	
	
	
}
