#include <stdio.h>

int power(int n);

int main() {

	for(int i = 0; i < 20; i++) {
			printf("power(%i) = %i\n", i, power(i));
	}
	return 0;
}

int power(int n) {
	if(n <= 0) {
		return 1;
	} else {
		return 2 * power(n - 1);
	}
}
