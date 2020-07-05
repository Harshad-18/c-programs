#include<stdio.h>

long factorial(int);

int main(){
	int num=5;
	int result=1;

	result=result * factorial(5);

	printf("Factorial of the number is:%ld",result);


	return 0;
}

long factorial(int num){

	if(num > 0){
		return num*factorial(--num);
	}
	else{
		return 1;
	}
}
