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
#include <functional>
using namespace std;

queue<int> q;

int main() {

	int n, k;
	cin >> n >> k;

	//큐에 n까지 숫자 삽입 
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	
	cout << "<";
	while (q.size()!=0) {

		for (int i = 1; i < k; i++) {
			int num = q.front();
			q.push(num);
			q.pop();
		}

		int num = q.front();
		cout << num;
		if (q.size() != 1) {
			cout << ", ";
		}
		q.pop();
	}
	cout << ">";

	return 0;
}