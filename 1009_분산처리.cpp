#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int a, b;
        cin >> a >> b;
        
        int temp = 1;
        while (b > 0)
        {
            temp *= a;
            temp %= 10;
            b--;
        }
        if (temp == 0)
            cout << 10 << "\n";
        else
            cout << temp << "\n";
    }
}