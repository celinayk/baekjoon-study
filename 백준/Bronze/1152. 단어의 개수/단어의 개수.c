#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	
	char data[1000001];
	scanf("%[^\n]", data);

	int len = strlen(data);
	int cnt = 0; //공백의 갯수 카운팅 
	for (int i = 0; i < len; i++) {
		if (data[i] == ' ') { //공백일때
			if (i != 0 && i != len - 1) {
				cnt++;
			}
			if (len == 1) { //빈공백만 입력했을 때(입력의 길이가 1이고 
                //그 입력이 공백일때)
				cnt = -1;
			}
		}
	}
 
	printf("%d\n", cnt + 1);
	return 0;
}