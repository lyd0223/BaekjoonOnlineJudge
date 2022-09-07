#include <bits/stdc++.h>
using namespace std;

//12869 뮤탈리스크
//조합을 이용해 풀었으나, 시간초과가 나온 관계로
//damage 2차원배열을 만들어서 해결.
int damage[6][3] = { {9, 3, 1},
                    {9, 1, 3},
                    {3, 1, 9},
                    {3, 9, 1},
                    {1, 3, 9},
                    {1, 9, 3} };
int dis[61][61][61];
void bfs(vector<int> v)
{
    queue<vector<int>> q;
    q.push(v);
    dis[v[0]][v[1]][v[2]] = 1;
    while (!q.empty())
    {
        vector<int> nowv(3, 0);
        for (int i = 0; i < 3; i++)
        {
            nowv[i] = q.front()[i];
        }
        q.pop();
        for (int i = 0; i < 6; i++)
        {
            vector<int> nextv(3, 0);
            for (int j = 0; j < 3; j++)
            {
                nextv[j] = max(0, nowv[j] - damage[i][j]);
            }
            
            if (dis[nextv[0]][nextv[1]][nextv[2]] != 0)
                continue;
            if (dis[0][0][0] != 0)
                return;
            dis[nextv[0]][nextv[1]][nextv[2]] = dis[nowv[0]][nowv[1]][nowv[2]] + 1;
            q.push(nextv);
        }
        
    }
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int N;
    cin >> N;
    vector<int> v(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    bfs(v);
    cout << dis[0][0][0]-1;
	return 0;
}

