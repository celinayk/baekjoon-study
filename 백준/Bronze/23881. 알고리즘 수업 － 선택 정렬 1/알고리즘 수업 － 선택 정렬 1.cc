#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <cmath>
#include <cstring>
using namespace std;


int main() {

    int n, k, last;
    int cnt = 0;
    scanf("%d %d", &n, &k);//n 배열크기

    //동적으로 메모리를 할당하여 배열 생성 
    //c++에서 배열을 선얼할때 크기는 상수값이어야함
    int* a = new int[n];
    //메모리시작주소, 초기화할값, 초기화할메모리크기
    memset(a, 0, sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = n - 1; i > 0; i--) {
        last = i;
        for (int j = i-1; j >= 0; j--) {
            if (a[j] > a[last]) {
                last = j;
                
            }
        }

        //자기자신이면 정렬 ㄴㄴ
        if (i != last) {
            swap(a[last], a[i]);
            cnt++;
        }
        
        if (cnt == k) {
            
            printf("%d %d", a[last], a[i]);
            //x = i;
           // y = last;

        }
        
    }

    if (cnt < k) {
        printf("-1");
    }

   
    delete[] a;
    return 0;
        
}