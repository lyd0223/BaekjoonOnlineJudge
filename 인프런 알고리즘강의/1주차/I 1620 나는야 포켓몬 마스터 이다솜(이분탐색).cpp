#include <bits/stdc++.h>
using namespace std;

// 처음에 map을 이용해서 풀엇는데 시간초과 떠서 개빡쳐서 이진탐색으로바꿧는데
// 이진탐색도 시간초과가 뜬다.
// 알고보니 입출력 문제였다.

//이진탐색
int BinarySearch(vector<pair<string,int>>& v, string key)
{
	int start = 0;
	int end = v.size() - 1;
	int mid;
	
	while (end - start >= 0)
	{
		mid = (start + end) / 2;
		
		if (v[mid].first == key)
			return v[mid].second;
		else if (v[mid].first > key)
			end = mid - 1;
		else
			start = mid + 1;
	}

	return -1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	cin >> N >> M;
	
	vector<string> v;
	vector<pair<string,int>> sortv;
	v.reserve(100001);
	sortv.reserve(100001);
	for (int i = 0; i < N; i++)
	{
		string name;
		cin >> name;
		
		v.push_back(name);
		sortv.push_back(make_pair(name, i));
	}
	sort(sortv.begin(), sortv.end());
	
	for (int i = 0; i < M; i++)
	{
		string key;
		cin >> key;
		
		//첫글자가 문자라면 
		if (key[0] >= 'A' && key[0] <= 'Z')
		{
			cout << BinarySearch(sortv, key) +1 << '\n';
		}
		//첫글자가 문자가 아니라면 
		else
		{
			cout << v[stoi(key)-1] << '\n';
		}
	}

	return 0;
}