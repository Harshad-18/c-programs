#include <stdio.h>


int main() {

	float x = 9.8763;
	int num = (int) x;
	int result = num-- + --num - ++num;
	printf(“%d”, result);

	return 0;
}
