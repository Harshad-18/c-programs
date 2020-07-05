#include <stdio.h>

float rectangle(float,float);
int main(){
	setbuf(stdout, NULL);

	float l,b;
	float result;

	puts("******************WELCOME**********************");
	printf("Enter the lenght of rectangle: ");
	scanf("%f", &l);

	printf("Enter the breadth of rectangle: ");
	scanf("%f", &b);

	result=rectangle(l,b);
	printf("perimter of the rectangle is %.2f",result);

	return 0;
}
float rectangle(float num1,float num2){
	return 2 * (num1 + num2);
}

