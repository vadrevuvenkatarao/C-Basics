#include<stdio.h>
void main()
{
 int a=10, b=2, sum, difference, product, quotient, remainder,n;
	
	sum=a+b;
	difference=a-b;
	product=a*b;
	quotient=a/b;
	remainder=a%b;
	n=sum+difference+product+quotient+remainder;
	printf("sum of %d and %d is %d\n", a,b, sum);
	printf("difference between %d and %d is %d\n", a,b, difference);
	printf("product of %d and %d is %d\n", a,b, product);
	printf("quotient when %d is divided by %d is %d\n", a,b, quotient);
	printf("remainder when %d is divided by %d is %d\n", a,b, remainder);
	printf("sum of all arithmetic operations is: %d", n);
	
}
