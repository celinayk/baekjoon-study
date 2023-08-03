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

	int n;
	cin >> n;

	//큐에 n까지 숫자 삽입 
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	
	while (q.size() != 1) {
		cout << q.front() << ' ';
		q.pop();
		q.push(q.front());
		q.pop();
	}
	
	
	cout << q.front();

	return 0;
}