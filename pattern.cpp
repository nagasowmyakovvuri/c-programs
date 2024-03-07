#include<stdio.h>
void print(int n)
{
   int static k;
   k=n;
   int i,nflag=0;
   if(i<0)
   {
      flag=1;
   }
   if(flag!=1)
   {
   for(i=1;i<n;i++)
   {
      printf("%d ",i);
   }
   }
   k--;
   print(n);
   
}
int main()
{
 int n;
 scanf("%d",&n);
 print(n);
 return 0;
}
