#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short int:\nsigned: %hd to %hd\n",SHRT_MIN, SHRT_MAX);
	printf("unsigned: %d to %hu",0,USHRT_MAX);
	printf("int:\nsigned:,%d to %d\n",INT_MIN, INT_MAX);
	printf("unsigned: %d to %u", 0, UINT_MAX);
	printf("long int:\nsigned:,%ld to %ld\n",LONG_MIN,LONG_MAX);
	printf("unsigned: %lu to %lu",0, ULONG_MAX);
	printf("long long int:\nsigned:%lld to %lld\n",LONG_LONG_MIN, LONG_LONG_MAX);
	printf("unsigned:%llu to %llu",0,ULONG_LONG_MAX);
	
}
