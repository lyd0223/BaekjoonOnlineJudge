#include <bits/stdc++.h>
using namespace std;

// 11279 최소 힙
// std::priority_queue 이용.
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int N;
    cin >> N;
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            if (pq.empty())
            {
                cout << '0' << '\n';
                continue;
            }
            cout << pq.top() << '\n';
            pq.pop();
            continue;
        }
        pq.push(n);
    }

	return 0;
}

