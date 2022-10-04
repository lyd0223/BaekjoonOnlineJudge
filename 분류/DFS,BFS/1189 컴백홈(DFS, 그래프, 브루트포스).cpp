#include <bits/stdc++.h>
using namespace std;

//1189 컴백홈
//이 문제는 BFS로 풀어선 안된다는 점을 유의하자.

int ct;
int dx[4] = { 0 , 0, 1, -1 };
int dy[4] = { 1 , -1 , 0, 0 };
void dfs(const vector<vector<int>>& v, vector<vector<int>> visited, int x, int y, int dis, int K)
{
    visited[y][x] = true;
    if (dis > K)
        return;
    if (x == v[0].size() - 1 && y == 0 && dis == K)
    {
        ct++;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        int nextx = x + dx[i];
        int nexty = y + dy[i];
        if (nextx < 0 || nextx >= v[0].size() || nexty < 0 || nexty >= v.size()
            || visited[nexty][nextx] == true || v[nexty][nextx] == 'T')
            continue;
        dfs(v, visited, nextx, nexty, dis + 1, K);
    }
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int R, C, K;
    cin >> C >> R >> K;
    vector<vector<int>> v(C, vector<int>(R, 0));
    for (int i = 0; i < C; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < R; j++)
        {
            v[i][j] = str[j];
        }
    }

    vector<vector<int>> visited(C, vector<int>(R, 0));
    dfs(v, visited, 0, v.size() - 1, 1, K);
    cout << ct;
	return 0;
}

