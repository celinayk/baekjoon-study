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

    vector<int> w(10);
    vector<int> k(10);
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &w[i]);      
    }
    for (int i = 0; i < 10; i++) {
        scanf("%d", &k[i]);       
    }

    sort(all(w));
    sort(all(k));

    int w_sum = 0;
    int k_sum = 0;

    for (int i = 7; i < 10; i++) {
        w_sum += w[i];
    }
    for (int i = 7; i < 10; i++) {
        k_sum += k[i];
    }
    printf("%d ", w_sum);
    printf("%d", k_sum);
    

    return 0;
}