#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;

    int ct = 0;
    
    while (n > 0)
    {
        n = n / 5;
        ct += n;
    }
    
    cout << ct;
}