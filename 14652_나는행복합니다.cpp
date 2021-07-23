#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;


int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m, k;

    cin >> n >> m >> k;

    cout << k / m << " " << k % m;
}