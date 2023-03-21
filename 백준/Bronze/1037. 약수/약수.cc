#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <cmath>
using namespace std;

int main() {

    int n;
    scanf("%d", &n); //정답의 약수의 개수 1이랑 본인 제외 

    int num[50] = { 0, };

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    int len = n;
    int ans = 0;
    if (n == 1) {
        printf("%d", num[0] * num[0]);
    }
    else {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (num[j] > num[j + 1]) {
                    swap(num[j], num[j + 1]);
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (n % 2 == 0) {
                ans = num[n / 2 - 1] * num[n / 2];
            }
            else {
                ans = num[(n - 1) / 2]* num[(n - 1) / 2];
            }
            
        }
        printf("%d", ans);
        
    }
    return 0;
}