#include <bits/stdc++.h>
using namespace std;

// 2636 치즈

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int visitArr[101][101];

void dfs(vector<vector<int>>& v, int x, int y, bool& isMelted, int& cheese)
{
    visitArr[y][x] = true;
    if (v[y][x] == 1) // 겉에있는 치즈만 녹아야하기때문에, 겉에있는 치즈만 녹인 후 dfs 탈출.
    {
        v[y][x] = 0;
        isMelted = true;
        cheese++;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        int nextx = x + dx[i];
        int nexty = y + dy[i];
        if (nextx < 0 || nextx >= v[0].size() || nexty < 0 || nexty >= v.size()
            || visitArr[nexty][nextx] == true)
            continue;
        dfs(v, nextx, nexty, isMelted, cheese);
    }
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int h,w;
    cin >> h >> w;
    vector<vector<int>> v(h, vector<int>(w, 0));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            int n;
            cin >> n;
            v[i][j] = n;
        }
    }

    int cnt = 0;          //녹은 횟수를 저장을 위한 변수.
    vector<int> cheesev;  //치즈 갯수 저장을 위한 vector
    while (1)
    {
        int cheese = 0;
        memset(visitArr, 0, sizeof(visitArr));
        bool isMelted = false;
        dfs(v, 0, 0, isMelted, cheese);
        if (isMelted == false)
            break;
        cheesev.push_back(cheese);
        cnt++;
    }

    cout << cnt << endl;
    cout << cheesev[cheesev.size() -1];

	return 0;
}

