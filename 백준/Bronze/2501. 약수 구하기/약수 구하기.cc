#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
using namespace std;

int main() {

    int n, k;
    int cnt = 0;
    int ans = 0;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if (cnt == k) {
                ans = i;
                break;
            } 
        }
    }
    printf("%d", ans);
  
    return 0;
}