#include <bits/stdc++.h>
using namespace std;

//2910 빈도정렬

//sort 이용, map 이용.
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N, C;
	cin >> N >> C;
	vector<int> v;
	map<int, pair<int,int>> m;  // map<숫자, pair<개수, 순서>>
	int order = 0;				// 들어가는 순서
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
		if (m.find(num) == m.end()) // 맵에 없으면 
		{
			m.insert(make_pair(num, make_pair(1, order)));
			order++;
		}
		else                        // 맵에 있으면
			m[num].first++;
		
	}
	sort(v.begin(), v.end(), [&](int a, int b)
		{
			if (m[a].first == m[b].first) // 개수가 같으면 순서로 비교.
				return m[a].second < m[b].second; 
			return m[a].first > m[b].first;
		});
	for (auto data : v)
	{
		cout << data << ' ';
	}
	return 0;
}

