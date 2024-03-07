# include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n],i,sum=0,count=0,p=0,s=0;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("a[%d] ===>%d\n",a[i],i);
if(a[i]%2==0)
{
count++;
sum=sum+a[i];
}
else
{
p++;
s=s+a[i];
}
}
printf("even count=%d\n",count);
printf("even sum=%d\n",sum);	
printf("odd count=%d\n",p);
printf("odd sum=%d",s);	
				
	
return 0;		
}

