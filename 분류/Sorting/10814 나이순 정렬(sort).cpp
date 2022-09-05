#include <bits/stdc++.h>
using namespace std;

// 10814 나이순 정렬
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int N;
    cin >> N;
    vector<pair<int, string>> v;
    for (int i = 0; i < N; i++)
    {
        int age; 
        string name;
        cin >> age >> name;
        v.push_back(make_pair(age, name));
        
    }
    stable_sort(v.begin(), v.end(), [](const pair<int, string>& a, const pair<int, string>& b)
        {
            if (a.first == b.first)
                return false;
            return a.first < b.first;
        });
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
    
	return 0;
}

