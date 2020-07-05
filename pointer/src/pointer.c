#include <stdio.h>

float largeNumber(float *,int);

int main() {

	float numbers[5] = {983, 2.9, 34, 433, 1000.567};
	float *p;
	p = &numbers[0];

	double num = largeNumber(p, 5);

	printf("Largest number is %.2lf",num);

	return 0;
}
float largeNumber(float *ptr,int size){
	float largest = *ptr;
	for(int i = 0 ;i < size ;i++){

		if(*ptr > largest){

			largest=*ptr;

		}
		ptr++;

	}
	return largest;
}
