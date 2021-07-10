#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    

    int M,N;
    cin >> M >> N;

    int arr[10001] = { 0, };
    
    arr[1] = 1;
    for (int i = 2; i < sqrt(10001); i ++)
    {
        for(int j = 2*i; j < 10001; j+=i)
            arr[j] = 1;
    }
    
    int min = 10001;
    int sum = 0;
    for (int i = M; i <= N; i++)
    {
        if (arr[i] == 0)
        {
            sum+= i;
            if (min > i)
                min = i;
        }
    }
    if (sum == 0)
    {
        cout << -1;
        return 0;
    }
    cout << sum << "\n" << min;
}