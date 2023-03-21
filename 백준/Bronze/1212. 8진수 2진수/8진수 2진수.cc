#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    string input;
    string num[] = {"000", "001", "010", "011", "100", "101", "110", "111" };
    //int num[] = { 000, 001, 010, 011, 100, 101, 110, 111};
  
    cin >> input;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '0') {
            if (i == 0)
                cout << '0';
            else
                cout << num[0];
        }
 
        else if (input[i] == '1') {
            if (i == 0)
                cout << '1';
            else
                cout << num[1];
        }
        
        else if (input[i] == '2') {
            if (i == 0)
                cout << "10";
            else
                cout << num[2];
        }

        else if (input[i] == '3') {
            if (i == 0)
                cout << "11";
            else
                cout << num[3];
        }

        else if (input[i] == '4') 
            cout << num[4];

        else if (input[i] == '5')
            cout << num[5];

        else if (input[i] == '6')
            cout << num[6];

        else if (input[i] == '7')
            cout << num[7];
          

    }
    return 0;
}