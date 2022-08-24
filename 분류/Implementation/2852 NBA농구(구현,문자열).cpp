#include <bits/stdc++.h>
using namespace std;

//2852 NBA농구

//string으로 된 시간을 아예 int(초)로 바꾼다.
int TimeTransform(string time)
{
    string m,s;
    int piv = time.find(':');
    m = time.substr(0, piv);
    s = time.substr(piv + 1, time.size() - piv);
    
    int result = 0;
    result += stoi(m) * 60;
    result += stoi(s);
    
    return result;
}

//int(초)로 된 시간을 문제 출력에 맞는 string으로 바꿈.
string TimeTransform(int time)
{
    int m, s;
    m = time / 60;
    s = time % 60;
    
    string result;
    if (m < 10)
        result += "0";
    result += to_string(m);
    result += ":";
    if (s < 10)
        result += "0";
    result += to_string(s);
    
    return result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    
    int N;
    cin >> N;
      
    vector<int> score(3, 0);
    vector<pair<int, int>> v; // <이기고있는 팀, 골 먹힌 시간>
    for (int i = 0; i < N; i++)
    {
        int team;
        string time;
        cin >> team >> time;

        score[team]++;

        int winningTeam;
        if (score[1] > score[2])
            winningTeam = 1;
        else if (score[1] < score[2])
            winningTeam = 2;
        else
            winningTeam = 0;
        v.push_back(make_pair(winningTeam, TimeTransform(time)));
    }
    v.push_back(make_pair(0, 60*48));

    vector<int> result (3,0);
    for (int i = v.size() - 1; i > 0; i--)
    {
        int start, end;
        end = v[i].second;
        start = v[i - 1].second;

        result[v[i - 1].first] += end - start;
    }

    cout << TimeTransform(result[1]) << endl;
    cout << TimeTransform(result[2]) << endl;
	return 0;
}

