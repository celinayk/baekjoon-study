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


int main()
{
    int n, m;
    cin >> n >> m;

    string result = "";
    int count = 0;

    int arr[50][4] = { 0 };

    for (int i = 0;i < n; i++) {

        string tmp;
        cin >> tmp;

        for (int j = 0; j < m; j++) {
            switch (tmp[j]) 
            {
            case 'A':
                arr[j][0]++;
                break;

            case 'C':
                arr[j][1]++;
                break;

            case 'G':
                arr[j][2]++;
                break;

            case 'T':
                arr[j][3]++;
                break;
            }

        }
    }

    for (int i = 0; i < m; i++) {

        int max = 0;
        int idx = 0;

        for (int j = 0; j < 4; j++) {
            if (arr[i][j] > max) {
                idx = j;
                max = arr[i][j];

            }
        }
        count += n - max;

        switch (idx)
        {
        case 0:
            result += 'A';
            break;

        case 1:
            result += 'C';
            break;

        case 2:
            result += 'G';
            break;

        case 3:
            result += 'T';
            break;
        }
    }

    cout << result << "\n";
    cout << count << "\n";

    return 0;

}
