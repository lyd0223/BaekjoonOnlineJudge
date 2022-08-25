#include <bits/stdc++.h>
using namespace std;

// 14502 연구소

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int visitArr[9][9];

//감염
void Infection(vector<vector<int>>& v, int x, int y)
{
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        visitArr[y][x] = true;
        v[y][x] = 2;
        
        for (int i = 0; i < 4; i++)
        {
            int nextx = x + dx[i];
            int nexty = y + dy[i];
            if (nextx < 0 || nextx >= v[0].size() || nexty < 0 || nexty >= v.size()
                || visitArr[nexty][nextx] == true || v[nexty][nextx] != 0)
                continue;
            q.push(make_pair(nextx, nexty));
        }
    }
}
//안전구역 갯수 반환하는 함수.
int CountSafeArea(vector<vector<int>>& v)
{
    //visitArr 초기화
    memset(visitArr, 0, sizeof(visitArr));
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == 2 && visitArr[i][j] != true)
            {
                Infection(v, j, i);
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == 0)
                cnt++;
        }
    }
    return cnt;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int M, N;
    cin >> M >> N;
    vector<vector<int>> lab(M, vector<int>(N, 0));
    vector<int> emptyArea; // 벽세울수 있는곳
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int n;
            cin >> n;
            lab[i][j] = n;

            if (n == 0) //벽 세울수 있는곳 추가
            {
                emptyArea.push_back(i * N + j);
            }
        }
    }
    
    int result = 0;
    //조합을 이용, 벽을 세울수 있는 모든 경우의 수 탐색.
    vector<vector<int>> tempLab = lab;
    vector<bool> check(emptyArea.size(), false);
    for (int i = 0; i < 3 ; i++)
    {
        check[emptyArea.size() -1 - i] = true;
    }
    do {
        vector<vector<int>> tempLab = lab;
        for (int i = 0; i < emptyArea.size(); i++)
        {
            if (check[i] == true)
            {
                //벽 세우기.
                int row, col;
                row = emptyArea[i] % N;
                col = emptyArea[i] / N;
                tempLab[col][row] = 1;
            }
        }
        result = max(result, CountSafeArea(tempLab));
    } while (next_permutation(check.begin(), check.end()));
    
    cout << result;
	return 0;
}

