#include <bits/stdc++.h>
using namespace std;

//구현문제.

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	string str;
	cin >> str;
	
	sort(str.begin(), str.end());
	
	string prefix, suffix;
	//가운데에 들어갈녀석. 한개이상이면 안되기때문에, 공백이아니라면 실패.
	char mid = ' ';
	for (int i = 0; i < str.size();)
	{
		if (i == str.size() - 1 || str[i] != str[i + 1] )
		{
			if (mid == ' ')
			{
				mid = str[i];
				i++;
				continue;
			}
			else
			{
				cout << "I'm Sorry Hansoo";
				return 0;
			}
		}
		
		prefix += str[i];
		suffix += str[i + 1];
		i += 2;
	}
	string result = "";
	sort(suffix.begin(), suffix.end(), greater<int>());
	result += prefix;
	if(mid != ' ')
		result += mid;
	result += suffix;

	cout << result;

	return 0;
}