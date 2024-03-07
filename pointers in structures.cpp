# include<stdio.h>
struct student 
{
int pin=123;
float per=80.85;	
};
int main()
{
struct student s1,*s2;
s2=&s1;

printf("%d %f",s2.pin,s2.per);
return 0;	
}


