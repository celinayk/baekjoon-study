#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);

	for (int i = n; i > 0; i--) { //n개만큼 라인만듬(가로)
		for (int j = 1; j <=i; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
