#include <bits/stdc++.h>
using namespace std;

//10709 기상캐스터

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    
    vector<vector<int>> result;
    int H, W;
    cin >> H >> W;
    for (int i = 0; i < H; i++)
    {
        string str;
        cin >> str;
        vector<int> v;
        bool westCheck = 0;
        int cnt = -1;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'c')
            {
                cnt = 0;
            }
            if (cnt == -1)
                v.push_back( cnt );
            else
            {
                v.push_back(cnt);
                cnt++;
            }
        }
        result.push_back(v);
    }
    
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
               cout << result[i][j] << ' ' ;
        }
        cout << endl;
    }
	return 0;
}

