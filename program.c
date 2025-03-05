#include<stdio.h>
int main() {
	int num1=10,num2=15,largest;
	if(num1>num2) {
		largest=num1;
		printf("the largest of two number1:%d\n",largest);
	}
	else
	{
		largest=num2;
		printf("the largest of number2:%d\n",largest);
	}
	return 0;
}
