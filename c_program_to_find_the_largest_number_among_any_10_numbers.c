#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,max;
	for(i=0;i<10;i++)
	{
		printf("enetr a number:");
		scanf("%d",&a[i]);
 }
 max=a[0];
 for(i=0;i<10;i++)
 {
 	if(a[i]>max)
 	max=a[i];
 }
	printf("\n The largest number is %d", max);
}
