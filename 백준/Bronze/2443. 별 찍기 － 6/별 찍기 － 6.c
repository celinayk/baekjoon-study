#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);

	for (int i = n; i > 0; i--) {
		for (int j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (int k = 1; k < 2 * i; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}