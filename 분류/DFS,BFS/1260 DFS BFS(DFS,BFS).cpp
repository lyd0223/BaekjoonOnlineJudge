#include <bits/stdc++.h>
using namespace std;

//1260 DFS와 BFS

int visited[10001];
void dfs(vector<vector<int>>& v, int now)
{
    visited[now] = true;
    cout << now << ' ';
    for (int i = 0; i < v[now].size(); i++)
    {
        int next = v[now][i];
        if (visited[next] == true)
            continue;
        dfs(v, next);
    }
}
void bfs(vector<vector<int>>& v, int start)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;
    cout << start << ' ';
    while (!q.empty())
    {
        int now = q.front();
        q.pop();
        for (int i = 0; i < v[now].size(); i++)
        {
            int next = v[now][i];
            if (visited[next] == true)
                continue;
            visited[next] = true;
            cout << next << ' ';
            q.push(next);
        }
    }
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int N, M, V;
    cin >> N >> M >> V;
    vector<vector<int>> v(N+1, vector<int>());
    for (int i = 0; i < M; i++)
    {
        int from, to;
        cin >> from >> to;
        //양방향이기때문에 양쪽 다 추가.
        v[to].push_back(from);
        v[from].push_back(to);
    }
    //문제에서 오름차순 정렬을 원하기때문에, 정렬시켜준다.
    for (int i = 0; i < M; i++)
    {
        sort(v[i].begin(), v[i].end());
    }
    dfs(v, V);
    cout << endl;
    memset(visited, 0, sizeof(visited));
    bfs(v, V);
    
	return 0;
}

