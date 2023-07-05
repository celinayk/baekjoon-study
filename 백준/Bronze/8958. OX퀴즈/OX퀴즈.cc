#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <limits.h>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <cmath>
#include <cstring>
using namespace std;

int main() {

	int n = 0;
	scanf("%d", &n);
	cin.ignore();

	for (int i = 0; i < n; i++) {
		string str;
		getline(cin, str);
		int sum = 0;
		int cnt = 0;

		for (int j = 0; j < str.length(); j++) {
			if (str[j]=='O') {
				if (str[0] || str[i - 1] == 'O') { 
					//바로 앞문자가 O일때
					cnt++;
					sum += cnt;

				}
				else { //바로 앞 문자가 x일때
					sum += 1;
					cnt = 1; //카운팅 초기화 
				}
			}
			else {
				cnt = 0;
			}
		}
		cout << sum << endl;
	}


	return 0;

}