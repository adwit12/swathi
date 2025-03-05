#include<stdio.h>
int main() {
	int num=15;
	printf("enter a number:");
	scanf("%d",&num);
	
	if(num>0)
		printf("the numer is positive.%d\n",num);

	else
		printf("otherwise the number is negative.%d\n",num);

	return 0;
}

