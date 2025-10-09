#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int i;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("\n results from 1 to %d:\n",n);
	for( i=1;i<=n;++i)
	{
	if (i%2 ==0){
	printf("Even: %d^3=%.0f|n",i,pow(i,3));
	}
	else{
		printf("odd:%.0f^2 =%.0f\n",i,pow(i,2));
	}
	printf("press any key to continue..\n");
	getch();}
	return 0;}

