# include<stdio.h>
# include<string.h>
struct student
{
char pin[20];
char name[20];
float perc;
char gender[20];
char mobile[12];
char gmail[50];	
};
int main()
{
struct student s1={"21P31A0526","sowmya",97.00,"female","9704269444","sowmya.gmail.com"};
struct student s2={"21P31A0527","priya",98.00,"female","9704296444","priya.gmail.com"};
struct student s3={"21P31A0528","hari",93.00,"male","98700812344","hari.gmail.com"};
struct student s4={"21P31A0529","navya",95.00,"female","90878675623","navya.gmail.com"};
struct student s5={"21P31A0530","vishnu",94.00,"male","78698192919","vishnu.gmail.com"};
/*strcpy(s1.pin,"21P31A0526");//we can also write as above instead of writing all these three line
strcpy(s1.name,"sowmya");
s1.perc=97.00;*/
printf("student details\n");
printf("pin\t\t\tname \t \tpercentage\tgender\t\tmobile number\t\tg mail\n");//\t gives space between the words 
printf("-------------------------------------------------------------\n");
printf("%s\t\t %s\t\t%.2f\t\t%s\t\t%s\t\t%s\n",s1.pin,s1.name,s1.perc,s1.gender,s1.mobile,s1.gmail);
printf("%s\t\t %s\t\t%.2f\t\t%s\t\t%s\t\t%s\n",s2.pin,s2.name,s2.perc,s2.gender,s2.mobile,s2.gmail);
printf("%s\t\t %s\t\t%.2f\t\t%s\t\t%s\t\t%s\n",s3.pin,s3.name,s3.perc,s3.gender,s3.mobile,s3.gmail);
printf("%s\t\t %s\t\t%.2f\t\t%s\t\t%s\t\t%s\n",s4.pin,s4.name,s4.perc,s4.gender,s4.mobile,s4.gmail);
printf("%s\t\t %s\t\t%.2f\t\t%s\t\t%s\t\t%s\n",s5.pin,s5.name,s5.perc,s5.gender,s5.mobile,s5.gmail);
return 0;	
}
