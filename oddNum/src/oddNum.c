#include <stdio.h>

void oddNumber(int[],int);


int main() {

	int number[10]={2, 98, 99, 27, 31, 53, 88, 92, 11, 12};

	oddNumber(number,10);

	return 0;
}
void oddNumber(int a[],int n){
	int count=0;

	for(int i=0; i < n; i++){

		if(a[i] % 2 != 0){
		count++;

		}


	}
	printf("Odd numbers are:%d",count);
}
