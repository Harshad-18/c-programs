#include<stdio.h>
int main() {
	setbuf(stdout, NULL);
	float reatailprice;
	float payableprice;

	printf("Enter the reatail price: ");
	scanf("%f", &reatailprice);

	if(reatailprice >= 400){
		puts("Eligible for discount");
		payableprice=reatailprice*0.9;
	}
	else{
		puts("Not eligible for discount");
		payableprice=reatailprice;
	}

	printf("Discount: %.1f\n",reatailprice-payableprice);
	printf("The payalbe amount: %.1f\n ",payableprice);

	return 0;

}
