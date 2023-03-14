#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int n;
	scanf("%d\n", &n);

	int data[1000] = { 0, };
	int temp;

	for (int i = 0; i < n; i++) {
		scanf("%d", &data[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 ; j++) {
			if (data[j] > data[j + 1]) {
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", data[i]);
	}

	return 0;
}
