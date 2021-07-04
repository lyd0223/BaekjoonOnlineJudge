#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;


int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int arr[10001] = { 0, };

    for (int i = 1; i <= 100; i++)
    {
        arr[i * i] = 1;
    }

    int M, N;
    cin >> M >> N;
    
    int sum = 0, min = 10001;
    for (int i = M; i <= N; i++)
    {
        if (arr[i] == 1)
        {
            sum += i;
            if (min > i)
                min = i;
        }
    }
    if (sum == 0)
        cout << -1;
    else
        cout << sum << "\n" << min;
    
}

