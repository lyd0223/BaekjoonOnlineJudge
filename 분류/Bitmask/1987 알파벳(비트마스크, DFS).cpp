#include <bits/stdc++.h>
using namespace std;

//1987 알파벳
// 비트마스킹 이용.
// A ~ Z를 1 ~ 2^26에 대응

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int result = 0;

void Print(int num)
{
    cout << bitset<26>(num) << "\n";
}

void dfs(const vector<vector<int>>& v, int x, int y, int num, int count)
{
    result = max(count, result);
    //Print(num);
    for (int i = 0; i < 4; i++)
    {
        int nextx = x + dx[i];
        int nexty = y + dy[i];
        
        if (nextx < 0 || nextx >= v[0].size() || nexty < 0 || nexty >= v.size())
            continue;

        if ((num & v[nexty][nextx]) == 0) // 알파벳에 대응하는 2의 제곱수가 비어있다면.
            dfs(v, nextx, nexty, num | v[nexty][nextx], count + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int R, C;
    cin >> C >> R;
    
    vector<vector<int>> v(C, vector<int>(R, 0));
    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < R; j++)
        {
            char c;
            cin >> c;
            // 알파벳에 대응하는 2의 배수로 바꿔서 넣어줌.
            v[i][j] = pow(2, c - 'A');
        }
    }
    
    dfs(v, 0, 0, v[0][0], 1);
    
    cout << result;
    
    return 0;
}
