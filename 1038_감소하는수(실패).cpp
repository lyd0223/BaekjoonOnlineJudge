#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<long long> v;
    for (int i = 0; i <= 9; i++)
    {
        v.push_back(i);
    }
    
    int n = 0;
    if (N > v.size())
    {
        while (v.size() != N+1)
        {
            int temp = 0;
            if (n >= v.size())
            {
                break;
            }
            while (temp < v[n]%10)
            {
                long long temp2 = v[n] * 10 + temp;
                v.push_back(temp2);
                temp++;
                if (v.size() == N+1)
                    break;
            }
            n++;
        }
    }
    if (N >= v.size())
        cout << -1;
    else
        cout << v[N];
}