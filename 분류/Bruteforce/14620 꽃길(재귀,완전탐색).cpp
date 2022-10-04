#include <bits/stdc++.h>
using namespace std;

// 14620 꽃길
// 재귀를 이용해서 완전탐색 시행.

int visited[11][11];
int minPrice = 1'000'000'000;
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int n;

bool Check(int x, int y)
{
    if (visited[y][x] == true)
        return false;
    
    for (int i = 0; i < 4; i++)
    {
        int nearx = x + dx[i];
        int neary = y + dy[i];

        if (nearx < 0 || nearx >= n || neary < 0 || neary >= n
            || visited[neary][nearx] == true)
            return false;
    }
    return true;
}
int AddFlower(vector<vector<int>>& v, int x, int y)
{
    int price = v[y][x];
    visited[y][x] = true;
    
    for (int i = 0; i < 4; i++)
    {
        int nearx = x + dx[i];
        int neary = y + dy[i];
        
        price += v[neary][nearx];
        visited[neary][nearx] = true;
    }
    return price;
}
void EraseFlower(int x, int y)
{
    visited[y][x] = false;
    for (int i = 0; i < 4; i++)
    {
        int nearx = x + dx[i];
        int neary = y + dy[i];

        visited[neary][nearx] = false;
    }
}
void Recursion(vector<vector<int>>& v, int price, int count)
{
    if (count == 3)
    {
        minPrice = min(price, minPrice);
        return;
    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (Check(j, i))
            {
                Recursion(v, price + AddFlower(v, j, i), count+1);
                EraseFlower(j, i);
            }
        }
    }
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    
    vector<vector<int>> v(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    
    Recursion(v, 0, 0);
    
    cout << minPrice;

	return 0;
}

