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

    int map[100][100];
    int t;
    cin >> t;
  
    
    for (int i = 0; i < t; i++) {
        int m, n;
     
        cin >> m >> n;
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < n; k++) {
                cin >> map[j][k];
            }
        } //그리드에 박스 입력받음 

        int ans = 0;
        for (int i = 0; i < n; i++) {
            int floor = m - 1; //바닥
            int dump = 0;
            for (int j = m - 1; j >= 0; j--) {          
                if (map[j][i] == 1) {
                    ans += floor - j-dump;
                    dump++;
                }
            }
        }

        cout << ans << endl;
        
    }
    
    return 0;
}
   