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
    string str;
    vector<string> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        v.push_back(str);
    }
    
    sort(v.begin(), v.end(), [](string a, string b)
        {
            if (a.size() != b.size())
                return a.size() < b.size();
            else
                return a < b;
        });

    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }
}