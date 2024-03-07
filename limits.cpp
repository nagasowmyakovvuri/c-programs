#include <stdio.h>
#include <limits.h>
int main()
{
printf("%hd to %hd\n",SHRT_MIN,SHRT_MAX);
printf("0 tO %hu\n",SHRT_MAX);	
printf("%d to %d\n",INT_MIN,INT_MAX);
printf("0 to %u\n",UINT_MAX);
printf("%ld to %ld\n",LONG_MIN,LONG_MAX);
printf("0 to %lu\n",ULONG_MAX);
printf("%lld to %lld\n",LLONG_MIN,LLONG_MAX);
printf("0 to %llu\n",ULLONG_MAX);	
return 0;	
}
