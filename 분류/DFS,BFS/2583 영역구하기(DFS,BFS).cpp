#include <bits/stdc++.h>
using namespace std;

//2583 영역 구하기
// bfs로도 되지만, 더 간단한 dfs로 구현했다.
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

// 각 영역의 크기를 구하기 위해 areact를 레퍼런스로 넘겨줬다.
void dfs(vector<vector<int>>& v, int x, int y, int& areact)
{
	v[y][x] = 1;
	areact++;
	for (int i = 0; i < 4; i++)
	{
		int nextx = x + dx[i];
		int nexty = y + dy[i];

		if (nextx < 0 || nextx >= v[0].size() || nexty < 0 || nexty >= v.size()
			|| v[nexty][nextx] == 1)
			continue;
		dfs(v, nextx, nexty, areact);
	}

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int M, N, K;
	cin >> M >> N >> K;
	vector<vector<int>> v(M, vector<int>(N, 0));
	for (int i = 0; i < K; i++)
	{
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		//직사각형 영역 채우기.
		for (int y = y1; y < y2; y++)
		{
			for (int x = x1; x < x2; x++)
			{
				v[y][x] = 1;
			}
		}
	}
	
	int totalct = 0;		 //나뉘어지는 영역의 개수
	vector<int> areacount_v; //각 영역의 넓이를 저장하는 vector
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (v[i][j] == 1)
				continue;
			int areact = 0;
			dfs(v, j, i, areact);
			areacount_v.push_back(areact);
			totalct++;
		}
	}
	cout << totalct << endl;
	sort(areacount_v.begin(), areacount_v.end());
	for (int i = 0; i < areacount_v.size(); i++)
	{
		cout << areacount_v[i] << ' ';
	}

	return 0;
}

