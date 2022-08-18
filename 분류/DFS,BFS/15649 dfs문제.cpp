#include <iostream>
#include <vector>

using namespace std;

int n, m;
bool visit[9] = { 0, };
int a[9];

void dfs(int start)
{
    if (start == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << a[i] << " ";
        }
        cout << '\n';
        return;
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (!visit[i]) {
			visit[i] = 1;
			a[start] = i;
            dfs(start + 1);
            visit[i] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    dfs(0);
}