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

double a; //게임 한판하는데 걸리는 시간 1
double d; //처음에 이길 확률 50
double k; //이전에 비해 승리할 확률 50

double solve(double d) {

	if (d >= 100) { //처음부터 이길확률이 100프로라면 
		return a; //첫판에 끝남 
	}

	double res = d * 0.01 * a + (100 - d) * 0.01 * (a + solve(d * (1 + k * 0.01)));

	return res;

}

int main() {
	 
	scanf("%lf %lf %lf", &a, &d, &k);

	printf("%.10lf", solve(d));


	return 0;
}