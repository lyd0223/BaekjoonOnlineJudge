#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int w, h;
    cin >> w >> h;
    
    //초기화
    vector<vector<int>> v(w, vector<int>(h, 0));
    vector<vector<int>> check(w, vector<int>(h, 0));
    for (int i = 0; i < w; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < h; j++)
        {
            if (str[j] == '1')
            {
                v[i][j] = 1;
            }
        }
    }
    
    int max = 0;
    //모든 좌표가 0일경우를 대비해 예외처리.
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
        {
            if (v[i][j] == 1)
            {
                max = 1;
                break;
            }
        }
    }

    //동적프로그래밍.
    for (int i = 1; i < w; i++)
    {
        for (int j = 1; j < h; j++)
        {
            if (v[i][j] != 0 && v[i-1][j-1] != 0 && v[i][j-1] != 0 && v[i-1][j] != 0)
            {
				v[i][j] = min(v[i - 1][j - 1], min(v[i][j - 1], v[i - 1][j])) + 1;
                if (v[i][j] > max)
                    max = v[i][j];
            }
        }
    }
   
    cout << max * max;
}