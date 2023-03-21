#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> arr(9,vector<int>(9,0));

int main() {
    int ans = 0;
    int x, y;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] >= ans) {
                ans = arr[i][j];
                x = i+1;
                y = j+1;
            }
        }
    }
    printf("%d\n", ans);
    printf("%d %d", x, y);
    
   
    return 0;
}