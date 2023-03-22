#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <cmath>
#include <cstring>
using namespace std;
#define all(x) (x).begin(), (x).end() 


int main() {

    int n;
    scanf("%d", &n);


    int cnt = 0;
    while (n >= 5) {
        cnt += n/ 5;
        n /= 5;
    }

     printf("%d ", cnt);
    
    return 0;
}
    