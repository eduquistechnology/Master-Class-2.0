#include<stdio.h>
void main(){
	int num1, num2;
	char operator;
	float result;
	while(1){
	printf("\nEnter the first number:");
	scanf("%d",&num1);
	printf("\nEnter the second number:");
	scanf("%d",&num2);
	printf("\nEnter the operation you want to do:");
	scanf(" %c",&operator);
	switch(operator)
	{
		case '+':
		{
		result = num1+num2;
		printf("\nResult: %f",result);
		break;
		}
		case '-':
		{
		result = num1-num2;
		printf("\nResult: %f",result);
		break;
		}
		case '*':
		{
		result = num1*num2;
		printf("\nResult: %f",result);
		break;
		}
		case '/':
		{
		if(num2 == 0)
		{
			printf("\n Division by Zero not allowed");
		}
		else{
			result = num1/num2;
			printf("\nResult: %f",result);
		}
		break;
		}
		default:
		break;
	}
	}
}
