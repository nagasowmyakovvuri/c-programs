# include <stdio.h>
# include <conio.h>
int main()
{
int month;
scanf("%d",&month);
switch (month)
{
case'3':
case'4':
case'5':
printf("summer\n");
break;
case'6':
case'7':
case'8':
case'9':
printf("rainy\n");
break;
case'10':
case'11':
case'12':
case'1':
case'2':
printf("winter\n");
break;
 default:
printf ("enter valid month");	
break;
}
return 0;
}
