#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, m;
    cin >> n >> m;
    
    map<string, bool> list;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        
        list.insert(make_pair(str, true));
    }
    vector<string> v;
    for (int i = 0; i < m; i++)
    {
        string str;
        cin >> str;
        if (list[str] == true)
        {
            v.push_back(str);
        }
    }
    
    sort(v.begin(), v.end());
    
    cout << v.size() << "\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }
}