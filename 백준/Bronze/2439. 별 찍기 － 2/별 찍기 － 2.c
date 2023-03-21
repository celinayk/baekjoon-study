#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) { //n개만큼 라인만듬(가로)
		for (int j = 0; j < n-i; j++) {
			printf(" ");
		}
		for (int j = 0; j <i; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}