#include <bits/stdc++.h>
using namespace std;

//구현문제.
// 간단해서 따로 주석 안담.
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N, M;
	cin >> N >> M;
	
	vector<int> v;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	
	int result = 0;
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = v.size() - 1; j > i; j--)
		{
			if (v[i] + v[j] == M)
			{
				result++;
			}
		}
	}
	cout << result;
	return 0;
}