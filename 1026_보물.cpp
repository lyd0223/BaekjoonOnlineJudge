#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        a.push_back(num);
    }
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        b.push_back(num);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(),greater<int>());
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i] * b[i];
    }
    cout << sum;
}