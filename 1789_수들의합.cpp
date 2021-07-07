#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    long long S;
    cin >> S;
    
    int ct = 1;
    while (S >= 0)
    {
        S -= ct;
        ct++;
    }
    
    cout << ct-2;
}