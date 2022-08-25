#include <bits/stdc++.h>
using namespace std;

// 4949 균형잡힌 세상
// 짝짓기 문제. stack 이용.

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    
    while (1)
    {
        string str;
        getline(cin, str);

        if (str == ".")
            break;
        
        stack<char> s;
        for (auto data : str)
        {
            if (data == '[')
            {
                s.push('[');
            }
            if (data == ']')
            {
                if (!s.empty() && s.top() == '[')
                {
                    s.pop();
                    continue;
                }
                else
                    s.push(']');
                    
            }
            if (data == '(')
                s.push('(');
            if (data == ')')
            {
                if (!s.empty() && s.top() == '(')
                {
                    s.pop();
                    continue;
                }
                else
                    s.push(')');
            }
        }
        if (s.empty())
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
	return 0;
}

