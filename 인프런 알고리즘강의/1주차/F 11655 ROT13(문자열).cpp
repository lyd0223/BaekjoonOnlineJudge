#include <bits/stdc++.h>
using namespace std;

//문자열문제
int main()
{
	string str;

	getline(cin, str); // cin은 띄어쓰기 입력 못받기때문에 getline 이용.

	for (int i = 0; i < str.size(); i++)
	{
		char newchar = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			newchar = ((str[i] - 'a' + 13) % 26) + 'a';
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			newchar = ((str[i] - 'A' + 13) % 26) + 'A';
		}
		else
			continue;
		str[i] = newchar;
	}

	cout << str;
}