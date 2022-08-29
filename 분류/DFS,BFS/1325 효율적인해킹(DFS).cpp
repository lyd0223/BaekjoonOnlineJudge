#include <bits/stdc++.h>
using namespace std;

//1325 효율적인 해킹
//간단 dfs 문제.

int visited[10001];
int dfs(const vector<vector<int>>& v, int num)
{
    visited[num] = true;
    int result = 1;
    for (int i = 0; i < v[num].size(); i++)
    {
        int nextnum = v[num][i];
        if (visited[nextnum])
            continue;
        result += dfs(v, nextnum);
    }
    return result;
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
       
    int N, M;
    cin >> N >> M;
    vector<vector<int>> v(N+1, vector<int>());
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        v[b].push_back(a);
    }

    vector <pair<int,int>> result;
    for (int i = 1; i <= N; i++)
    {
        //visited 초기화 필수.
        memset(visited, 0, sizeof(visited));
        result.push_back( make_pair(i, dfs(v, i)));
    }
    sort(result.begin(), result.end(), [](pair<int, int> a, pair<int, int> b)
        {
            if (a.second == b.second)
                return a.first < b.first;
            return a.second > b.second;
        });
    
    int max = result[0].second;
    for (int i = 0; i < result.size(); i++)
    {
        if (max != result[i].second)
            break;
        cout << result[i].first << " ";
    }
	return 0;
}

