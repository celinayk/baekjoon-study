#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	
	int z;
	scanf("%d", &z); 

	for (int i = z; i >0; i--) {
		printf("%d\n", i);
	}
	
	return 0;
}