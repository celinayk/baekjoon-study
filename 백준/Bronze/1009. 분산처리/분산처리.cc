#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
using i64 = long long;

i64 power(i64 a, i64 b) {
    i64 c = 1;
    while (b > 0) { //더이상 곱할게 없을때까지
        if (b % 2 == 1) { //지수가 홀수라면 a곱함 
            c = (c*a)%10;
        }
        a = (a * a) % 10;
        b /= 2;
    }
    
    return c;
}

int main() {

    i64 t;
    scanf("%lld", &t);

    for (int i = 0; i < t; i++) {
        i64 a, b;
        scanf("%lld %lld", &a, &b);
        i64 c = power(a, b);
        if (c == 0) {
            printf("10\n");
        }
        else {
            printf("%lld\n", c);
        }
       
    }

    return 0;
}