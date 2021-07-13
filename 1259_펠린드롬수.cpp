#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    while (1)
    {
        string str;
        cin >> str;
        if (str == "0")
            break;
        
        string str1 = str;
        reverse(str.begin(), str.end());
        if (stoi(str1) == stoi(str))
            cout << "yes\n";
        else
            cout << "no\n";
        
    }
}