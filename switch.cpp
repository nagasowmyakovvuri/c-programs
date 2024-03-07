# include <stdio.h>
# include <conio.h>
int main()
{
char code;
scanf("%c",&code);
switch (code)
{
case'V':
printf("voilet\n");
break;
case'I':
printf("indigo\n");
case'v':
printf("voilet\n");
break;
case'B':
printf("blue\n");
break;
case'Y':
printf("yellow\n");
break;
case'O':
printf("orange\n");
break;
case'R':
printf("red\n");
break;
default:
printf("enter any valid colour\n");
break;
	
	}
printf("task completed");		
return 0;	
	
}
