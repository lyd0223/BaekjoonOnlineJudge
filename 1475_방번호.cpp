#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

//나눳을때 정수가 아닌지 판별하는법은, 다시 곱했을때와 같은지를 확인하면된다.
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    string N;
    cin >> N;
    
    int arr[10] = { 0, };
    
    for (int i = 0; i < N.size(); i++)
    {
        if (N[i]-48 == 9)
        {
            arr[6]++;
        }
        else
            arr[N[i]-48] ++;
    }
    if (arr[6] % 2 == 1)
        arr[6] = arr[6] / 2 + 1;
    else
        arr[6] /= 2;

    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;
    
}