#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    

    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        
        double dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        
        if (dis == 0 && r1 == r2)
            cout << -1 << "\n";
        else if (dis < abs(r1 - r2))
            cout << 0 << "\n";
        else if (dis == (double)r1 + (double)r2 ||
            dis == abs((double)r1 - (double)r2))
            cout << 1 << "\n";
        else if (dis < (double)r1 + (double)r2)
            cout << 2 << "\n";
        else
            cout << 0 << "\n";
    }
}