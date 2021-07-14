#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int l, a, b, c, d;
    cin >> l >> a >> b >> c >> d;

    int n1 = a / c;
    int n2 = b / d;
    if (a % c != 0)
        n1++;
    if (b % d != 0)
        n2++;
    
    cout << l - max(n1, n2);
}