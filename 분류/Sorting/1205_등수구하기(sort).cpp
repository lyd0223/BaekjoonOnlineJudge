#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N, score, P;
    cin >> N >> score >> P;
    
    vector<int> lankList;
    for (int i = 0; i < N; i++)
    {
        int s;
        cin >> s;
        lankList.push_back(s);
    }
    
    if (N == 0)
    {
        cout << 1;
        return 0;
    }
    sort(lankList.begin(), lankList.end(), greater<int>());
    if (lankList[lankList.size() - 1] >= score && lankList.size() >= P)
    {
        cout << -1;
        return 0;
    }
    lankList.push_back(score);
    sort(lankList.begin(), lankList.end(), greater<int>());
    for (int i = 0; i < lankList.size(); i++)
    {
        if (score == lankList[i])
        {
            cout << i+1;
            break;
        }
    }
}