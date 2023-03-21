#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int z;
	scanf("%d", &z); 

	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", z,i, z*i);
	}
	
	return 0;
}