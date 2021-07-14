#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int a, b, c, d;
    int e, f, g, h;
    cin >> a >> b >> c >> d;
    cin >> e >> f >> g >> h;

    cout << max(a + b + c + d, e + f + g + h);
}