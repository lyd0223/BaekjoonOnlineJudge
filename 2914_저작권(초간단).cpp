#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{   
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;
    
    cout << a * (b - 1) +1;
}