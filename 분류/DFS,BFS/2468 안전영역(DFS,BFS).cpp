#include <bits/stdc++.h>
using namespace std;


//2468 안전영역

int dx[4] = { 0 , 0 , 1 , -1 };
int dy[4] = { 1 , -1 , 0 , 0 };


void dfs(vector<vector<int>>& checkv, int x, int y)
{
	checkv[y][x] = false;
	for (int i = 0; i < 4; i++)
	{
		int nextx = x + dx[i];
		int nexty = y + dy[i];
		if (nextx < 0 || nextx >= checkv.size() || nexty < 0 || nexty >= checkv.size()
			|| checkv[nexty][nextx] == false)
			continue;

		dfs(checkv, nextx, nexty);
	}
}

// 지역 v에 rain만큼 비가 내렸을때 잠기지않는 영역 개수를 구하는 함수.
int FindAria(const vector<vector<int>>& v, int rain)
{
	//비에 잠기지 않는 영역 구하기.
	vector<vector<int>> checkv(v.size(), vector<int>(v.size(), 0));
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v.size(); j++)

		{
			if (v[i][j] > rain)
			{
				checkv[i][j] = true;
			}
		}
	}

	//영역 갯수 구하기.
	int ct = 0;
	for (int i = 0; i < checkv.size(); i++)
	{	
		for (int j = 0; j < checkv.size(); j++)
		{
			if (checkv[i][j] == false)
				continue;
			dfs(checkv, j, i);
			ct++;
		}
	}
	return ct;
	
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;
	vector<vector<int>> v(N, vector<int>(N, 0));
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int n;
			cin >> n;
			v[i][j] = n;
			
		}
	}

	int result = 1;
	for (int j = 1; j <= 100; j++)
	{
		result = max(result, FindAria(v, j));
		int a = 0;
	}
	cout << result;
	return 0;
}

