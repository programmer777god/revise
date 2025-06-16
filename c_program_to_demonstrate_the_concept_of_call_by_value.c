#include<stdio.h>
void swap(int,int);//function protype
void main()
{
	int a=10, b=20;
	printf("Before swapping the values in main function a= %d,b =%d",a,b);
	swap(a,b);
	printf("\nAfter swapping values in main function = %d,b = %d",a,b);
}
void swap (int p,int q)
{
	int temp;
	temp = p;
	p=q;
	q=temp;
	printf("\nAfter sdwapping values in function a = %d,b = %d",p,q);
}
