#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> arr(N,vector<int>());
    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        
        for (int j = 0; j < M; j++)
        {
            arr[i].push_back(str[j]-48);
        }
    }
    int max = 1;
    vector<vector<int>> check(N, vector<int>(M, 1));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int c = 1;
            while (1)
            {
                if (i + c >= N || j + c >= M)
                    break;
                if (arr[i][j] == arr[i + c][j] && arr[i + c][j] == arr[i][j + c] && arr[i][j + c] == arr[i + c][j + c])
                {
                    if (check[i][j] < c + 1)
                    {
                        check[i][j] = c + 1;
                        if (max < c + 1)
                            max = c + 1;
                    }
                }
                c++;
            }
        }
    }
    cout << max*max;
}