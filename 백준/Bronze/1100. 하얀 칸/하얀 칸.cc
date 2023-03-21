#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    
    char num;
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            scanf(" %c", &num);
            if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1)) {
                if (num == 'F') {
                    cnt++;
                }
            }
        }
    }
    printf("%d", cnt);
   
     
    return 0;
}