#include <bits/stdc++.h>
using namespace std;

// map과 map iterator이용.

//5명이상인 성이 있는지 확인.
string Check(map<char, int> firstname_m)
{
	string result = "";
	map<char, int>::iterator iter;
	for (iter = firstname_m.begin(); iter != firstname_m.end(); iter++)
	{
		if (iter->second >= 5)
			result += iter->first;
	}
	return result;
}

int main()
{
	int N; 
	cin >> N;

	map<char, int> m;
	for (int i = 0; i < N; i++)
	{
		string firstname;
		cin >> firstname;
	
		m[firstname[0]]++;
	}
	
	string result = Check(m);
	if (result == "")
		cout << "PREDAJA";
	else
		cout << result;

	return 0;
}