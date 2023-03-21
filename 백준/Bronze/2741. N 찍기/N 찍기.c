#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	
	int z;
	scanf("%d", &z); //자연수 N 입력받음 

	for (int i = 1; i <= z; i++) {
		printf("%d\n", i);
	}
	
	return 0;
}