#include <bits/stdc++.h>
using namespace std;

//4659 비밀번호 발음하기
//문자열문제.

bool Check(string& str, map<char, bool>& m)
{
	//1.모음 하나라도 있는지 확인.
	for (int i = 0; i < str.size(); i++)
	{
		if (m[str[i]] == true)
			goto breakfor; // 이중 for문 탈출을 위해 goto 사용.
	}
	return false;
breakfor:
	//2. 모음이 3개 혹은 자음이 3개 연속으로 오는지.
	if (str.size() >= 3)
	{
		for (int i = 0; i < str.size() - 2; i++)
		{
			if (m[str[i + 1]] == m[str[i]] && m[str[i + 2]] == m[str[i]]) // 세글자 자음 또는 모음 연속
				return false;
		}
	}
	//3. 같은 글자 연속적으로 두번오는지
	if (str.size() >= 2)
	{
		for (int i = 0; i < str.size() - 1; i++)
		{
			if (str[i] == str[i + 1] && str[i] != 'e' && str[i] != 'o')
				return false;
		}
	}
	
	return true;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	map<char, bool> m; // 자음 모음 판별 map. true면 모음 , false면 자음.
	for (char i = 'a'; i < 'z'; i++)
	{
		if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
			m[i] = true;
		else
			m[i] = false;
	}
	while (1)
	{
		string str;
		cin >> str;
		if (str == "end")
			break;
		switch (Check(str, m))
		{
		case true :
			cout << "<" << str << "> is acceptable." << endl;
			break;
		case false:
			cout << "<" << str << "> is not acceptable." << endl;
			break;
		}
		
	}
	
	return 0;
}

