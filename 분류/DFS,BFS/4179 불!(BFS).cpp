#include <bits/stdc++.h>
using namespace std;

// 4179 불!
// bfs를 이용해서 처리한다.
// 불을 먼저 번지게 한 후, 불이 번진 위치를 key로 가지며 불이 번진 시간(거리)를 value로갖는 map을 만듬.
// 지훈이를 bfs로 이동시키며 해당 위치의 불이 번진 시간과 비교.

int dx[4] = { 1, -1 , 0, 0 };
int dy[4] = { 0 , 0, 1, -1 };
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int C, R;
    cin >> C >> R;
    vector<vector<char>> v(C, vector<char>(R, 0));
    map<pair<int, int>, int> fire; // <위치 ,시간>
    pair<int, int> start;
    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < R; j++)
        {
            cin >> v[i][j];
            if (v[i][j] == 'F')
                fire.insert(make_pair(make_pair(i, j),0));
            if (v[i][j] == 'J')
                start = make_pair(i, j);
        }
    }
    
    //불 번지기
    queue<pair<int, int>> q;
    vector<vector<int>> visited(C, vector<int>(R, 0));

    for (auto& data : fire)
    {
        q.push(data.first);
        visited[data.first.first][data.first.second] = true;
    }
    int time = 0;
    while (1)
    {
        if (q.empty())
            break;
        time++;
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            int nowy = q.front().first;
            int nowx = q.front().second;
            q.pop();
            for (int j = 0; j < 4; j++)
            {
                int nexty = nowy + dy[j];
                int nextx = nowx + dx[j];
                if (nexty < 0 || nexty >= C || nextx < 0 || nextx >= R
                    || visited[nexty][nextx] == true || v[nexty][nextx] == '#')
                    continue;
                fire.insert(make_pair(make_pair(nexty, nextx), time));
                visited[nexty][nextx] = true;
                q.push(make_pair(nexty, nextx));
                
            }
        }
    }

    //탈출
    queue<pair<pair<int, int>,int>> q2;
    vector<vector<int>> visited2(C, vector<int>(R, 0));
    q2.push(make_pair(make_pair(start.first, start.second),0));
    visited2[start.first][start.second] = true;
    while (!q2.empty())
    {
        int nowy = q2.front().first.first;
        int nowx = q2.front().first.second;
        int dis = q2.front().second;
        q2.pop();
        if (nowy == 0 || nowx == 0 || nowy == C-1 || nowx == R-1)
        {
            cout << dis+1;
            return 0;
        }
        bool check = false;
        for (int i = 0; i < 4; i++)
        {
            int nexty = nowy + dy[i];
            int nextx = nowx + dx[i];
            if (v[nexty][nextx] == '#'                      //벽이거나
                || (fire.find(make_pair(nexty, nextx)) != fire.end() && fire[make_pair(nexty, nextx)] <= dis+1)     
                                                            //불이 이미 있는곳 이거나
                || visited2[nexty][nextx] == true)          //이미 방문했으면 못간다.
                continue;
            
            
            q2.push(make_pair(make_pair(nexty, nextx),dis +1));
            visited2[nexty][nextx] = true;
            check = true;
        }
        if (check == false && q2.empty())
        {
            cout << "IMPOSSIBLE";
            return 0;
        }
    }
    
	return 0;
}

