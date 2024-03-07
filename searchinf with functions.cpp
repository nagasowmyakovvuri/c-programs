#include<stdio.h>
void linear_search(int n,int *a,int t)
{
  int i,flag=0;
  for(i=0;i<n;i++)
  {
     if(a[i]==t)
     {
      flag=1;
      break;	
     }
  }
  if(flag==1)
  printf("True");
  else
  printf("False");
}
int main()
{
 int n,t;
 scanf("%d",&n);
 int i,a[n];
 for(i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }
 scanf("%d",&t);
 linear_search(n,a,t);
 return 0;
}
