#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int h, m, s;
    cin >> h >> m >> s;
    int time;
    cin >> time;
    s += time;
    while (s >= 60)
    {
        m++;
        s -= 60;
    }
    while (m >= 60)
    {
        h++;
        m -= 60;
    }
    while (h >= 24)
    {
        h -= 24;
    }

    cout << h << " " << m << " " << s;

}