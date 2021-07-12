#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N,M;
    cin >> N >> M;
    
    vector<vector<int>> v(N, vector<int>(M, 0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> v[i][j];
        }
    }
    
    int K;
    cin >> K;
    for (int i = 0; i < K; i++)
    {
        int x1, y1, x2, y2;
		cin >> y1 >> x1 >> y2 >> x2;
        
        int sum = 0;
        for (int y = y1-1; y <= y2-1; y++)
        {
            for (int x = x1-1; x <= x2-1; x++)
            {
                sum += v[y][x];
            }
        }
        cout << sum << "\n";
    }
}