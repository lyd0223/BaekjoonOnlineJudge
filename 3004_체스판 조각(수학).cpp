#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N;
    cin >> N;
    
    int a = 1;
    int b = 1;
    while (N > 0)
    {
        if (N % 2 == 1)
            a++;
        else
            b++;
        N--;
    }
    cout << a * b;
}