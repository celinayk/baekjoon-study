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

	string x;
	string y;

	cin >> x;
	cin >> y;

	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end());

	int xx = stoi(x);
	int yy = stoi(y);

	int sum = xx + yy;

	string ans = to_string(sum);

	reverse(ans.begin(), ans.end());

	int ans_ = stoi(ans);

	cout << ans_;


	return 0;

}