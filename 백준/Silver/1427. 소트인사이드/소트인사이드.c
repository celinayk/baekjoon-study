#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {
	
	char num[11] = { 0, };
	char temp;

	scanf("%s", num);

	for (int i = 0; i < strlen(num)-1; i++) {
		for (int j = 0; j < strlen(num) - 1 - i; j++) {
			if (num[j] < num[j + 1]) {
				temp = num[j + 1];
				num[j + 1] = num[j];
				num[j] = temp;
			}
		}
	}
	
	printf("%s", num);

	return 0;
}