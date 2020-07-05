#include <stdio.h>


int main () {
	setbuf(stdout, NULL);
	int num,originalint,reservedint=0,remainder;
	printf("Enter the integer: ");
	scanf("%d", &originalint);
	originalint == num;

	while(num != 0){
		remainder= num % 10;
		reservedint=reservedint*10+remainder;
		num /= 10;
	}

	if(originalint==reservedint){
		printf("Given integers are palindrome");

	}else{
		printf("Given palindrome is not palindrome");
	}

	    return 0;
}
