#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main() {

    int n;
    scanf("%d", &n);
    vector <int> student;

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        student.insert(student.begin() + i - num, i + 1);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", student[i]);
    }
    return 0;
}