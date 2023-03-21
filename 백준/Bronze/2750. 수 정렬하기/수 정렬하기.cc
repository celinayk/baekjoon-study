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

    int n;
    scanf("%d", &n);
    int a[1000] = { 0, };

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        int min = i;

        //최솟값을 탐색 
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) { 
                min = j;
            }
        }

        //정렬한다 
        swap(a[i], a[min]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
    

  
    return 0;
}