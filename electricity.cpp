/*a c program to find electric bill*/
# include<stdio.h>
int main()
{
int charge,u,s=0,t;
float a;
printf("enter units");
scanf("%d",&u);
if(u<=199)
{
charge=1.20;	
	}	
if(u>=200&&u<400)
{
charge=1.40;	
	}
if(u>=400&&u<600)
{
charge=1.80;	
		}		
if(u>=600)
{
charge=2;	
	}
a=u*charge;
if(a>400)
{
s=a*15/100;	
	}	
t=a+s;
printf("units=%d",u);
printf("amount=%2f",a);
printf("surcharge=%d",s);
printf("total bill=%d",t);	
return 0;			
}
