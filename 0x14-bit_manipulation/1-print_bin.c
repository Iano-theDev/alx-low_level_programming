#include <stdio.h>

void print_binary(int n) {
	int bits, flag = 0;

	if (n == 0) {
		printf("%d", n);
		return;
	}

	for (bits = 31; bits >= 0; bits--) {
		if (flag == 0 && ((n >> bits) & 1))
			flag = 1;
		if (flag == 1)
			printf("%d", (n >> bits) & 1);
	}
}
