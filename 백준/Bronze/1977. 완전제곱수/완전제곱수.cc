#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <cmath>
using namespace std;

int main() {

    int m, n;
    scanf("%d %d", &m, &n);

    int sum = 0;
    int cnt = 0;
    int mini = 10000;
    

    for (int i = m; i <= n; i++) {
        if (sqrt(i) == floor(sqrt(i))) {
            cnt++;
            sum += i;//완전제곱수의 합 
            mini=min(mini, i);
        }
    
    }
    if (cnt == 0) {
        printf("-1");
    }
    else {
        printf("%d\n", sum);
        printf("%d", mini);

    }
    
    return 0;
}