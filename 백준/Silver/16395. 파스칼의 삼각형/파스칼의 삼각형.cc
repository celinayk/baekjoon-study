#define _CRT_SECURE_NO_WARNINGS
#define MAX 10
#include <iostream> 
#include <limits.h>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <cmath>
#include <cstring>
using namespace std;

int arr[31][31];

int main()
{
    
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < 31; i++) {
        arr[i][0] = 1;
    }
    
    for (int i = 1; i <31; i++) {
        for (int j = 1; j <=i; j++) {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
  
    cout << arr[n - 1][k - 1] << endl;


    return 0;


}
