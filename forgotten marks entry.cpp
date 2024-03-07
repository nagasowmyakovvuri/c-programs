
#include<stdio.h>
  int main() 
  { 
  int marks[20],n,i,pos,mm; 
  scanf("%d",&n);
   for(i=0;i<n-1;i++)
    { 
    scanf("%d",&marks[i]);
    } 
    printf("Enter missing student position\n");
scanf("%d",&pos);
 printf("Enter the student marks to enter in the mission position\n"); 
scanf("%d",&mm);
printf("The marks before insertion of missing student marks\n");
for(i=0;i<n-1;i++)
printf("%d ",marks[i]); 
for(i=n-1;i>pos-1;i--)
 { marks[i]=marks[i-1];
} 
marks[pos-1]=mm;
printf("The marks after insertion of missing student marks\n");
 for(i=0;i<n;i++) 
printf("%d ",marks[i]);
  return 0;
                }
