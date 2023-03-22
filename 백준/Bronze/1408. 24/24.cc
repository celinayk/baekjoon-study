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

struct Time {
    int h;
    int m;
    int s;
};

int main() {
    Time now, start;
   
    scanf("%d:%d:%d", &now.h, &now.m, &now.s);

    scanf("%d:%d:%d", &start.h, &start.m, &start.s);

    int startsum = start.h * 3600 + start.m * 60 + start.s;
    int nowsum = now.h * 3600 +now. m * 60 + now.s;
   

    if (startsum > nowsum) {
        startsum -= nowsum;
        printf("%02d:%02d:%02d", startsum / 3600, (startsum % 3600) / 60, (startsum % 3600) % 60);
      
    }
    else {
        nowsum=startsum + (24 * 3600) - nowsum;
      
        printf("%02d:%02d:%02d", nowsum / 3600, (nowsum % 3600) / 60, (nowsum % 3600) % 60);  
    }

   
    
    return 0;
}
    