#include<stdio.h>
int fib(int);
void main()
{
	int i,n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
{
	printf("%d\t",fib(i));
}
}
int fib(int n)
{
	if(n==1)
	return 0;
	else if(n==2)
	return 1;
	else
	return(fib(n-1)+fib(n-2));
}
