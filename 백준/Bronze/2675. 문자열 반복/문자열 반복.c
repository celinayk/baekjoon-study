#include <stdio.h>
#include <string.h>

int main() {
	
	int n; //테스트의 개수
	int r; //문자열 반복 횟수 
	scanf("%d", &n);
	char s[20]; 

	for (int i = 0; i < n; i++) {
		scanf("%d %s", &r, s); //3 ABC 입력받음

		for (int j = 0; j < strlen(s); j++) { //문자열의 길이만큼 반복 
			for (int k = 0; k < r; k++) {
				printf("%c", s[j]);
			}
		}
		printf("\n");
	}
	return 0;
}