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



int main()
{
    int n;
    cin >> n;

    vector<int>a;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        a.push_back(num);
    }

    vector<int>b;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        b.push_back(num);
    }

    int b_max = 0;
    int a_min = 0;
    int ans = 0;
    sort(a.begin(), a.end(), greater<>());

    for (int i = 0; i < n; i++) {
         b_max = *max_element(b.begin(), b.end());
         a_min = a.back();
         ans += b_max * a_min;
         a.pop_back();

         auto it =find(b.begin(), b.end(), b_max);
         b.erase(it);
    }

    cout << ans;
}
