#include <bits/stdc++.h>
using namespace std;

//17298 오큰수
// i번째가 들어왓을때마다 우큰값을 찾게되면 시간초과다.
// 역발상으로 i번째가 들어왔을때 i번째값을 우큰값으로 취하는 녀석들을 찾아주자.
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
       
    int N;
    cin >> N;
    vector<int> v(N, 0);
    vector<int> result(N, -1);
    stack<int> s;
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
        while (!s.empty() && v[s.top()] < v[i])
        {
            result[s.top()] = v[i];
            s.pop();
        }
        s.push(i);
    }
    for (int i = 0; i < N; i++)
    {
        cout << result[i] << ' ';
    }
    
	return 0;
}

