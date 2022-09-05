#include <bits/stdc++.h>
using namespace std;

// 16234 인구 이동
// 단순 bfs 이용을 하는 문제긴하지만,
// 꽤나 조건이 빡센문제라 1시간정도 걸렸다....

int visited[51][51];
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int L, R;
bool b;
void Emigrate(vector<vector<int>>& v, vector<pair<int, int>> union_v)
{
    if (union_v.size() == 1)
        return;
    int sum = 0;
    for (int i = 0; i < union_v.size(); i++)
    {
        int y = union_v[i].first;
        int x = union_v[i].second;
        int popul = v[y][x];
        sum += popul;
    }
    int p = sum / union_v.size();
    for (int i = 0; i < union_v.size(); i++)
    {
        int y = union_v[i].first;
        int x = union_v[i].second;
        v[y][x] = p;
    }
    b = true;
}
void bfs(vector<vector<int>>& v, int y, int x)
{
    if (visited[y][x] == true)
        return;
    queue<pair<int, int>> q;
    q.push(make_pair(y, x));
    vector<pair<int, int>> union_v; // 연합
    union_v.push_back(make_pair(y, x));
    visited[y][x] = true;
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
                || visited[nexty][nextx] == true)
                continue;
            
            int gap = abs(v[nexty][nextx] - v[nowy][nowx]);
            if (gap < L || gap > R)
                continue;
            visited[nexty][nextx] = true;
            pair<int, int> pos = make_pair(nexty, nextx);
            union_v.push_back(pos);
            q.push(pos);
        }
    }
    Emigrate(v, union_v);
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int N;
    cin >> N >> L >> R;
    vector<vector<int>> v(N, vector<int>(N, 0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> v[i][j];
        }
    }

    int result = 0;
    while (1)
    {
        b = 0;
        memset(visited, 0, sizeof(visited));
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                bfs(v, i, j);
            }
        }
        if (b == false)
            break;
        result++;
    }
    cout << result;
	return 0;
}

