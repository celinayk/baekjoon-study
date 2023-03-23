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
#define all(x) (x).begin(), (x).end() 

int maxSubArraySum(vector<int> &num, int l, int r) {

    if (l == r) //벡터에 원소가 하나만 있는 경우 
        return num[l];

    int m = (l + r) / 2; //벡터의 중간 지점에서 분할

    int leftMax = INT_MIN, sum = 0;
    for (int i = m; i >= l; i--) {
        sum += num[i];
        leftMax = max(leftMax, sum);
    }

    int rightMax = INT_MIN;
    sum = 0;
    for (int i = m + 1; i <= r; i++) {
        sum += num[i];
        rightMax = max(rightMax, sum);
    }

    //leftMax + rightMax는 인덱스l부터 r까지의 부분배열에서 구한 
    //최대 연속 부분합 중에서. 중간 부분 배열에 포함된 부분 배열에서
    //구한 최대 연속 부분합을 포함하는 경우 
    return max(max(maxSubArraySum(num, l, m), maxSubArraySum(num, m + 1, r)), leftMax + rightMax);


}

int main() {
    
    int n;
    scanf("%d", &n);
    vector <int> num(n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    int maxSum = maxSubArraySum(num, 0, n - 1);
    printf("%d", maxSum);
   
    
    return 0;
}
    