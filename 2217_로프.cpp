#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end(),greater<int>());
    int max = 0;
    while (v.size() != 0)
    {
        
        int maxtemp = v[v.size() - 1] * v.size();
        if (max < maxtemp)
        {
            max = maxtemp;
        }
        v.pop_back();
    }
    
    cout << max;
}