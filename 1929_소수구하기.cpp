#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <math.h>
using namespace std;

int arr[1000001];
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int m, n;
    cin >> m >> n;
    
    
    arr[1] = 1;
    for (int i = 2; i < sqrt(1000001); i++)
    {
        for (int j = 2*i; j < 1000001; j += i)
        {
            arr[j] = 1;
        }
    }

    
    for (int i = m; i <= n; i++)
    {
        if (arr[i] != 1)
            cout << i << "\n";
    }
}