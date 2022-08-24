#include <bits/stdc++.h>
using namespace std;

//9012 괄호
// 짝짓기 문제. stack 이용.

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        stack<char> s;
        for (auto data : str)
        {
            if (!s.empty() && s.top() == '(' && data == ')')
            {
                s.pop(); 
                continue;
            }
            s.push(data);
        }
        if (s.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
	return 0;
}

