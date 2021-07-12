#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//이분탐색 및 매개변수탐색을 쓴다.
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    long long N,K;
    cin >> K >> N;
    vector<long long> v;
    for (int i = 0; i < K; i++)
    {
        long long num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    long long start = 1;
    long long end = v[v.size() - 1];
    while (1)
    {
        if (start+1 == end || start == end)
            break;
        long long mid = (start + end) / 2;
        int ct = 0;
        for (int i = 0; i < v.size(); i++)
        {
            ct += (v[i] / mid);
        }
        if (ct >= N)
        {
            start = mid;
        }
        else
        {
            end = mid;
        }
    }
    int ct = 0;
    for (int i = 0; i < v.size(); i++)
    {
        ct += (v[i] / end);
    }
    if (ct >= N)
        cout << end;
    else
        cout << start;

}