#include <stdio.h>


int main() {

	setbuf(stdout, NULL);

	int a[2][3];
	int p,q,sum=0;

	for(p = 0;p < 2;p++){
		for(q = 0;q < 3;q++){
			printf("enter the element in a[%d][%d]:  ",p,q);
			scanf("%d", &a[p][q]);


		}
	}
	for(p = 0;p < 2;p++){
			for(q = 0;q < 3;q++){
				printf("%d ",a[p][q]);
			}
			printf("\n");

	}

	for(p = 0;p < 2;p++){
				for(q = 0;q < 3;q++){
					sum=sum+a[p][q];

					printf("Sum: %d",sum);
				}

	}
	return 0;
}
