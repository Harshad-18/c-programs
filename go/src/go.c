#include <stdio.h>
#include <stdlib.h>




int main() {
	setbuf(stdout, NULL);

	float nums[3] = {1.88, 2.11};         // Statement 1
	float *ptr = nums;            // Statement 2
	printf("%p\n%p", ptr, nums);


    return 0;
}
