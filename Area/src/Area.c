#include<stdio.h>
#include<unistd.h>


int main(){
	setbuf(stdout, NULL);
	const int PI=3.14;
	int   radius;
	float area;


	printf("\n********************************************\n");
	printf("\n-------------------Welcome--------------------\n");
	printf("\n********************************************\n");

	printf("Enter the radius of the circle in centimeter: ");
	scanf("%d", &radius);

	printf("\nCalculating Area........\n");

	usleep(2000000000);

	area=PI*radius*radius;

	printf("Area of the circle is %.2f sq.cm", area);


	printf("\n********************************************\n");
	printf("\n-------------------Thank You------------------\n");
	printf("\n*********************************************\n");


	return 0;
}
