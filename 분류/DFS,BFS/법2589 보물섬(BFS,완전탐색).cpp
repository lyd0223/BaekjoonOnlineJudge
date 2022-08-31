#include <bits/stdc++.h>
using namespace std;

//2589 보물섬
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

int visited[51][51];
int CheckDistance(vector<vector<char>>& v, int y, int x)
{
    memset(visited, 0, sizeof(visited));
    queue<pair<int, int>> q;
    q.push(make_pair(y, x));
    visited[y][x] = 1;
    int maxdis = 0;
    while (!q.empty())
    {
        int nowy = q.front().first;
        int nowx = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nexty = nowy + dy[i];
            int nextx = nowx + dx[i];
            if (nexty < 0 || nexty >= v.size() || nextx < 0 || nextx >= v[0].size()
                || visited[nexty][nextx] != 0 || v[nexty][nextx] == 'W')
                continue;
            visited[nexty][nextx] = visited[nowy][nowx] + 1;
            maxdis = max(maxdis, visited[nexty][nextx]);
            q.push(make_pair(nexty, nextx));
        }
    }
    return maxdis -1;
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int w, h;
    cin >> h >> w;
    vector<vector<char>> v(h, vector<char>(w,0));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> v[i][j];
        }
    }
    int result = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (v[i][j] == 'L')
                result = max(CheckDistance(v, i, j), result);
        }
    }
    cout << result;
	return 0;
}

