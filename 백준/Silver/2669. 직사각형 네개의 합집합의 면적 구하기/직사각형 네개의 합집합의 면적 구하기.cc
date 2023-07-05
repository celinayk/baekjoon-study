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

int arr[101][101];
int ans;

int main()
{
    for (int i = 0; i < 4; i++) {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        for (int j = x1; j < x2; j++) {
            for (int k = y1; k < y2; k++) {
                if (arr[j][k] == 0) {
                    arr[j][k] = 1;
                    ans++;
                }
            }
        }
    }

    printf("%d", ans);
}
