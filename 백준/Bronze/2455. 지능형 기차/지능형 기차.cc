#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
using namespace std;

int main() {

    int out, in;
    int total = 0;
    int max = 0;
    for (int i = 0; i < 4; i++) {
        scanf("%d %d", &out, &in);
        total = total + in - out;
        if (total > max) {
            max = total;
        }
    }
    printf("%d", max);
    return 0;
}