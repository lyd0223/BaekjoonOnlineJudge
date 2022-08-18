#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string str;
    
    cin >> str;
    
    sort(str.begin(), str.end(), greater<int>());
    
    cout << str;
    
}