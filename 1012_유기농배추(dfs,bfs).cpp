#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
using namespace std;


//매번 변경되는 farm이기 때문에, &값으로 가져온다. 
void dfs(int y, int x, vector<vector<int>>& farm)
{
    if (farm[y][x] == 0)
        return;
    farm[y][x] = 0;
    if(y>0)
	    dfs(y - 1, x, farm);
    if(y<farm.size()-1)
	    dfs(y + 1, x, farm);
    if(x<farm[y].size()-1)
        dfs(y, x + 1, farm);
    if(x>0)
        dfs(y, x - 1, farm);
}
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int M, N, K;
        cin >> M >> N >> K;

		vector<vector<int>> farm(M, vector<int>(N,0));
        for (int j = 0; j < K; j++)
        {
            int X, Y;
            cin >> Y >> X;
            farm[Y][X] = 1;
        }

        int ct = 0;
        for (int y = 0; y < M; y++)
        {
            for (int x = 0; x < N; x++)
            {
                if (farm[y][x] == 1)
                {
                    ct++;
					dfs(y, x, farm);
                }
            }
        }

        cout << ct << "\n";
    }
}