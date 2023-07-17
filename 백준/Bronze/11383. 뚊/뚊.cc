
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
bool check = true;

int main()
{
    int n,m;
    cin >> n >> m;
    
    string str[n];
    string str2[n];
    string tmp[n];
    
    for(int i=0; i<n; i++) {
        cin >> str[i];
    }
    
    for(int i=0; i<n; i++) {
        cin >> tmp[i];
    }
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<str[i].size(); j++) {
            str2[i] +=str[i][j];
            str2[i] +=str[i][j];
        }
        
         if(str2[i]!=tmp[i])  {
        check = false;
         }
    }
    
   
    
    
if(check)
{
cout<<"Eyfa"<<endl;
}
else{
cout<<"Not Eyfa"<<endl;
}
    
    

    return 0;
}