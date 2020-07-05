#include <stdio.h>


int main () {
	setbuf(stdout, NULL);
	int i;
	double num, sum=0;

	for(i=0; i<=10 ;i++){
		printf("Enter the numbers %d: ",i);
		scanf("%lf", &num);

		if(num < 0)
			break;

		if(num > 100)
			continue;

		sum += num;
	}

		printf("sum:%.2lf",sum);

	    return 0;
}
