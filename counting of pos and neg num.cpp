//7. Write a C program to read numbers until -1 is encountered and also count the
//positive, negative and zeros encountered by the users using while loop construct


# include<stdio.h>
int main()
{

int x, p ,n ,z ;
n=p=z=0;
printf("Enter an integer: ");
while(1){
printf("Enter an integer: ");
scanf ("%d", &x);
if(x==-1) break;
if(x<0)
n++;
else if (x>0) p++;
else z++;
}
printf("%d ",n);
printf("\n");
printf("%d ",z);
printf("%d",p);
printf("\n");
}


