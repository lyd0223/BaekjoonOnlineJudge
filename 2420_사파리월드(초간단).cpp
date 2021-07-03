#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;


int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    long long N, M;
    cin >> N >> M;

    cout << abs(N - M);
}

