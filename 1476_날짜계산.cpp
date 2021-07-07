#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int E, S, M;
    cin >> E >> S >> M;

    int n = 1;
    while (1)
    {
        if (E == 1 && S == 1 && M == 1)
            break;
        E--;
        if (E < 1)
            E = 15;
        S--;
        if (S < 1)
            S = 28;
        M--;
        if (M < 1)
            M = 19;
        n++;
    }
    
    cout << n;
}