#include<stdio.h>
int fact(int);
void main()
{
	int n,x;
	printf("Enter a number:");
	scanf("%d",&n);
	x=fact(n);
	printf("the factorial is %d",x);
}
int fact(int n)
{
if(n==1) //stopping condition
return 1;
else 
return(n*fact(n-1));
}
