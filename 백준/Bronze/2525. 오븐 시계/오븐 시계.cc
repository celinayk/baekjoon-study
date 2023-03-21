#define _CRT_SECURE_NO_WARNINGS
#include <iostream>  
#include <algorithm>
using namespace std;


int main() {

    int a,b,c;
    int sum = 0;
    scanf("%d %d %d", &a, &b, &c);

    b += c;
    a += b / 60;
    
    printf("%d %d", a%24, b%60);

    
    return 0;
}