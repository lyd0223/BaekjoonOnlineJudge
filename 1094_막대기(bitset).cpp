#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int x;
    cin >> x;
    
    bitset<8> bit(x);
    
    cout << bit.count();
}