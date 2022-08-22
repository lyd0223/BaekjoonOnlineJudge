#include <bits/stdc++.h>
using namespace std;

//2870 수학숙제
//문자열문제.
// 숫자가 long long을 벗어나는경우가 있다. 따라서 int 또는 longlong을 쓰면안된다.

// 숫자 앞에 0이 들어가있는 경우 0 지워주기위한 함수.
string StringtoInt(string& str)
{
	string result;
	int zeroCnt=0;
	for (auto data : str)
	{
		if (data == '0')
		{
			zeroCnt++;
		}
		else break;
	}
	if (zeroCnt == str.size()) // 싹다 0 이면 걍 0 리턴.
		return "0";
	result = str.substr(zeroCnt, str.size() - zeroCnt);
	return result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;
	vector<string> v;
	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;
		for (int j =0; j < str.size();)
		{
			if (str[j] >= '0' && str[j] <= '9')
			{
				string temp = "";
				int k = j;
				while (1)
				{
					if (k >= str.size() || str[k] < '0' || str[k] > '9' )
						break;
					temp += str[k];
					k++;
				}
				v.push_back(StringtoInt(temp));
				j = k + 1;
				continue;
			}
			j++;
		}
	}
	sort(v.begin(), v.end(), [](string& a, string& b)
		{
			if (a.size() == b.size())
				return a < b;
			return a.size() < b.size();
		});
	
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	return 0;
}

