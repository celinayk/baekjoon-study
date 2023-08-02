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
	int n;
	cin >> n;
	char str[101][101];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> str[i][j];
		}
	}
	int rowcnt = 0;
	int colcnt = 0;


	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			if (str[i][j] == '.')
				count++;
			else
			{
				if (count > 1)
					rowcnt++;
				count = 0;
			}
		}
		if (count > 1)
			rowcnt++;
	}

	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			if (str[j][i] == '.')
				count++;
			else
			{
				if (count > 1)
					colcnt++;
				count = 0;
			}
		}
		if (count > 1)
			colcnt++;
	}


	cout << rowcnt <<  ' ' << colcnt;

	return 0;
}
