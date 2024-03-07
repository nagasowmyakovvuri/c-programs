# include<stdio.h>
struct learners
{
int pin;
char name[20];
float per;	
};
int main()
{
struct learners l1;
//printf("size of the structure is %d bytes",sizeof(struct learners));
printf("enter the pin number");
scanf("%d",&l1.pin);
printf("enter the name");
scanf("%s",l1.name);
printf("enter the percentage");
scanf("%.2f\n",&l1.per);
printf("pin\t\t\tname\t\t\tpercentage\n");
printf("----------------------------------\n");
printf("%d\t\t\t%s\t\t\t%.2f",l1.pin,l1.name,l1.per);
return 0;
}
