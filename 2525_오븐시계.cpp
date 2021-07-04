#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int h, m, t;
    cin >> h >> m >> t;
    
    m += t;
    while (m >= 60)
	{
		h++;
		m -= 60;
    }
    
    if (h >= 24)
    {
        h -= 24;
    }

    cout << h << " " << m;
}