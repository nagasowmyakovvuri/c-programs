#include<stdio.h>
int main()
{
 int a[20],n,i,pos,lm; 
  scanf("%d",&n);
   for(i=0;i<n;i++)
    { 
    scanf("%d",&a[i]);
    } 
    printf("Enter duplicate student position\n");
scanf("%d",&pos);
 printf("Enter the student marks to enter in the duplicate position\n"); 
scanf("%d",&lm);
printf("The marks before insertion of last student marks\n");
for(i=0;i<n;i++)
printf("%d ",a[i]); 
for(i=pos-1;i<n-1;i++)
{
a[i]=a[i+1];	
}
a[n-1]=lm;
for(i=0;i<n;i++)
{
printf("%d ",&a[i]);	
}
return 0;	
}


