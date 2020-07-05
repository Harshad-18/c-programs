#include <stdio.h>
#include <unistd.h>


int main() {
	setbuf(stdout, NULL);


	int m1,m2,m3,m4,m5,total,std;
	char name;
	char sec;

	printf("\n****************Jawahar Navodaya Vidyalaya*****************\n");
	printf("\n****************** Annual Report Card *********************\n");
	printf("\n");

	printf("Name: ");
	scanf("%[^\n]%*c", &name);

	printf("Section: ");
	scanf("%c", &sec);

	printf("Standard: ");
	scanf("%d", &std);

	printf("\n");

	printf("\nmarks secured out of 100\n");
	printf("Mathematics: ");
	scanf("%d", &m1);
	printf("English: ");
	scanf("%d", &m2);
	printf("Hindi: ");
	scanf("%d", &m3);
	printf("Science: ");
	scanf("%d", &m4);
	printf("Social Science: ");
	scanf("%d", &m5);

	total=m1+m2+m3+m4+m5;

	puts("\ncalculating total marks..............\n");
	usleep(100000000);

	printf("Total marks secured:%d\n",total);
	if(total>=450 && total<=500){
		puts("grade:A");

	}else if(total>=400 && total<=449){
		puts("grade:B");

	}else if(total>=350 && total<=399){
		puts("grade:C");

	}else if(total>=300 && total<=349){
		puts("grade:D");

	}else if(total>=200 && total<=299){
		puts("grade:E");

	}else if(total<200 && total>=0){
		puts("grade:F");
	}else{
		puts("Invalid score");
		exit(0);

	}
	printf("\n***********************Thank You**************************\n");

	return 0;
}
