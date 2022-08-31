#include <bits/stdc++.h>
using namespace std;

//15686 치킨배달
int CheckDistance(pair<int, int> from, pair<int, int> to)
{
    return abs(from.first - to.first) + abs(from.second - to.second);
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int N, M;
    cin >> N >> M;
    vector<vector<int>> v(N, vector<int>(N,0));
    vector<pair<int, int>> chickenv;
    vector<pair<int, int>> homev;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> v[i][j];
            if (v[i][j] == 2)
                chickenv.push_back(make_pair(j, i));
            else if (v[i][j] == 1)
                homev.push_back(make_pair(j, i));
        }
    }
    
    vector<int> checkv(chickenv.size(), false); // 조합을 구하기 위해 체크할 vector.
    for (int i = 0; i < M; i++)
    {
        checkv[i] = true;
    }
    vector<vector<pair<int, int>>> nonClosedv; //폐점되지않은 치킨집
    do
    {
        vector<pair<int, int>> tempv;
        for (int i = 0; i < checkv.size(); i++)
        {
            if (checkv[i] == true)
                tempv.push_back(chickenv[i]);
        }
        nonClosedv.push_back(tempv);
    } while (prev_permutation(checkv.begin(), checkv.end()));

    int result = 99999999;
    for (int i = 0; i < nonClosedv.size(); i++)
    {
        //최소거리 찾기.
        int dis = 0;
        for (int j = 0; j < homev.size(); j++)
        {
            int neardis = 99999999;
            for (int k = 0; k < nonClosedv[i].size(); k++)
            {
                neardis = min(CheckDistance(homev[j], nonClosedv[i][k]), neardis);
            }
            dis += neardis;
        }
        result = min(result, dis);
    }
    cout << result;
	return 0;
}

