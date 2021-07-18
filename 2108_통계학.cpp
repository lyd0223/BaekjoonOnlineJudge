#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
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
        float num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    
    int sum = 0;
    vector<pair<int, int>> frq_v;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
        if (i == 0)
            frq_v.push_back(make_pair(v[i],1));
        else
        {
            if (frq_v[frq_v.size() - 1].first == v[i])
            {
                frq_v[frq_v.size() - 1].second++;
            }
            else
                frq_v.push_back(make_pair(v[i], 1));

        }
    }

    float avg = (float)sum / (float)v.size();
    int mid = v[v.size()/2];
    int frq;
    sort(frq_v.begin(), frq_v.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
        });
    if (frq_v.size() > 1)
    {
        if (frq_v[0].second == frq_v[1].second)
            frq = frq_v[1].first;
        else
            frq = frq_v[0].first;
    }
    else
        frq = frq_v[0].first;
    int rng = v[v.size()-1] - v[0]; 
    cout << round(avg) << "\n";
    cout << mid << "\n";
    cout << frq << "\n";
    cout << rng << "\n";
     
}