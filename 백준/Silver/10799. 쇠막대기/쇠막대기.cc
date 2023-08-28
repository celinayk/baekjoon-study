#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <limits.h>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <cmath>
#include <cstring>
#include <queue>
#include <stack>
#include <functional>
using namespace std;



int main() {

	stack<char> stack;

	string str; 
	cin >> str;
	
	int result = 0;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') { //여는 괄호면 push
			stack.push(str[i]);
		}
		else {
			stack.pop();
			if (str[i - 1] == '(') { //레이저인 경우 
				result += stack.size(); //사이즈만큼 갯수 추가 
			}
			else { //파이프끝 이면 
				result++;
			}
		}
	}

	cout << result;

	return 0;
}