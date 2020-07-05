#include <stdio.h>


int main() {
	setbuf(stdout, NULL);

	int m1,m2,m3,m4,m5,total;

	puts("Enter the marks of sub1: ");
	scanf("%d", &m1);
	puts("Enter the marks of sub2: ");
	scanf("%d", &m2);
	puts("Enter the marks of sub3: ");
	scanf("%d", &m3);
	puts("Enter the marks of sub4: ");
	scanf("%d", &m4);
	puts("Enter the marks of sub5: ");
	scanf("%d", &m5);

	total=m1+m2+m3+m4+m5;
	printf("total marks of the student is %d",total);

	if(total>=450 && total<=500){
		puts("You got A grade");

	}else if(total>=400 && total<=450){
		puts("You gor B grade");

	}else if(total>=350 && total<=400){
		puts("You got C grade");

	}else if(total>=250 && total<=350){
		puts("You got D grade");

	}else if(total>150 && total<=250){
		puts("You got E grade");
	}


	return 0;
}
