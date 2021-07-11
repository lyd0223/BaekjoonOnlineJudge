#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    
    int M;
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int num;
        cin >> num;
        if (v.end() == find(v.begin(), v.end(), num))
            cout << 0 << "\n";
        else
            cout << 1 << "\n";
        
    }
}