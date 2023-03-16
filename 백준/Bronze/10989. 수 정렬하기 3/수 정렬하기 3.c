#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10000

int main() {
	
	int counting[SIZE + 1];
	for (int i = 0; i < SIZE + 1; i++) {
		counting[i] = 0; 
	}
	//카운팅 배열 선언,초기화

	int n, num;
	scanf("%d", &n);


	for (int i = 0; i < n; i++) {
		scanf("%d", &num); //정렬할 숫자들을 배열에 입력
		counting[num]++;
	}

	for (int i = 0; i < SIZE + 1; i++) {
		for (int j = 0; j < counting[i]; j++) {
			printf("%d\n", i);
		}
	}
	return 0;
}
