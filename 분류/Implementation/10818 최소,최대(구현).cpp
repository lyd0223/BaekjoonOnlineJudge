#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int N;
    cin >> N;
    
    vector<int> v;
    v.reserve(N);
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    cout << v[0] << " " << v[v.size() - 1];

	return 0;
}

