#include<stdio.h>
#include<unistd.h>


int main(){
	setbuf(stdout, NULL);

	int bill;
	int tax,totalbill,amount;

	puts("Enter the bill: ");
	scanf("%d", &bill);

	printf("\n");

	tax= bill*0.05;

	printf("the tax will be %d", tax);

	printf("\n");
	printf("\n");


	totalbill=bill+tax;

	printf("Total bill including tax will be:%d", totalbill);

	printf("\n");

	if(totalbill>=1000){
		amount=totalbill*0.9;

	}else{
		amount=totalbill;
	}
	printf("\n");
		printf("The payable amount will be %d rupees", amount);

	return 0;
}
