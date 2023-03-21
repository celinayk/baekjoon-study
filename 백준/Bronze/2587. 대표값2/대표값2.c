#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int data[1000];
	int aver, cen, temp;
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &data[i]);
		sum += data[i];
		aver = sum / 5;
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (data[j] > data[j + 1]) {
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}

	printf("%d\n%d", aver, data[2]);

	return 0;
}