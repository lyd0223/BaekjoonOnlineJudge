#include <bits/stdc++.h>
using namespace std;

//BFS 이용문제.

int N, M;
//거리 저장을 위한 배열.
int gDisArr[101][101];
//전방향 탐색을 위한 방향을 나타내는 배열.
int gDirx[4] = {-1, 1, 0 , 0};
int gDiry[4] = {0, 0, -1 ,1 };

void bfs(const vector<vector<int>>& v)
{
	queue<pair<int, int>> q;
	q.push(make_pair(0, 0));
	gDisArr[0][0] = 1;
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		
		for (int i = 0; i < 4; i++)
		{
			int nextx = x + gDirx[i];
			int nexty = y + gDiry[i];
			if (nextx < 0 || nextx >= v[0].size() // x값 범위 벗어남.
				|| nexty < 0 || nexty >= v.size() // y값 범위 벗어남.
				|| v[nexty][nextx] == false		 // 길이 막혀있음
				|| gDisArr[nexty][nextx] != 0)// 이미 방문했음. 
			{
				continue;
			}
			q.push(make_pair(nextx, nexty));
			gDisArr[nexty][nextx] = gDisArr[y][x] + 1;
		}
	}
	

}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M;
	
	vector<vector<int>> v(N, vector<int>(M, 0));
	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;
		for (int j = 0; j < M; j++)
		{
			v[i][j] = str[j] - '0';
		}
	}

	bfs(v);
	
	cout << gDisArr[N - 1][M - 1];
	return 0;
}