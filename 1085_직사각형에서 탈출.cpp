#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int x, y, w, h;
    cin >> x >> y >> w >> h;
    
    cout << min(x, min(y, min(w - x, h - y)));
}