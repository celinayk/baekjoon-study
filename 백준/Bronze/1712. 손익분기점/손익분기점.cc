#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <algorithm>
using namespace std;

int main() {

    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if (b >= c) {
        printf("-1");
    }
    else {
        printf("%d", a / (c - b) + 1);
    }
    
    return 0;
}