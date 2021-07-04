#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N, K, I;
    cin >> N >> K >> I;
    
    //판단을 위해 임한수와 김지민의 순서가 정렬되어야한다.
    if (I < K)
    {
        int temp = K;
        K = I;
        I = temp;
    }

    int ct = 1;
    while (K % 2 != 1 || I != K+1)
    {
        if (I % 2 == 1)
        {
            I = I / 2 + 1;
        }
        else
        {
            I /= 2;
        }
        if (K % 2 == 1)
        {
            K = K / 2 + 1;
        }
        else
        {
            K /= 2;
        }
        ct++;
    }
    cout << ct;
}