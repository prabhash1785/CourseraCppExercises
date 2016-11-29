#include <stdio.h>

int main() {
	double array[] = {1.2, 3.4, 2.3};
	double sum = 0.0;
	for(int i = 0; i < 3; i++) {
		sum += array[i];
	}

	printf("Sum =  %f", sum);
}
