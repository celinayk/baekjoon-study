#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <cmath>
using namespace std;


int main() {

    int in, out;
    int total = 0;
    int max = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d %d", &out, &in);
        total += in - out;//이게 최종 탄사람수
        if (total > max) {
            max = total;
        }
    }
    printf("%d", max);
    
    return 0;
}