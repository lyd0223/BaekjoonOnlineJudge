#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N, findNum;
    cin >> N >> findNum;
    
    vector<vector<int>> v(N, vector<int>(N, 0));
    
    int x = N / 2, y = N / 2;
    
    //dir : 0인경우 위 , 1인경우 우측, 2인경우 아래, 3인경우 좌측
    int dir = 0;
    int num = 1;
	int n = 1;
    int tempx = 0, tempy = 0;
    while (x >= 0 && y >= 0)
    {
        int ct = 0;
        while (ct < n)
        {
            v[y][x] = num;
            if (num == findNum)
            {
                tempx = x;
                tempy = y;
            }
            
            num++;
            ct++;
            switch (dir)
            {
                
            case 0:
                y--;
                break;
            case 1:
                x++;
                break;
            case 2:
                y++;
                break;
            case 3:
                x--;
                break;
            }
            
        }
        dir++;
        
        if (dir > 3)
            dir = 0;
        if (dir == 0 || dir == 2)
            n++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    cout << tempy+1 << " " << tempx+1;
    
}