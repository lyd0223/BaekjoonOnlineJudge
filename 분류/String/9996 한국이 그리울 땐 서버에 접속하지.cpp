#include <bits/stdc++.h>
using namespace std;

// 간단한 문자열 구현문제.
// string의  substr과 find을 이용.
int main()
{
	int N;
	string pattern;
	cin >> N >> pattern;

	//패턴을 '*'의 위치를 기반으로 접두어와 접미어로 찢는다.
	string beginPattern, endPattern;
	size_t starPos = pattern.find("*");
	beginPattern = pattern.substr(0, starPos);
	endPattern = pattern.substr(starPos + 1, pattern.size());

	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;

		// 예외처리. beginPattern과 endPattern이 겹치면 안된다.
		if (beginPattern.size()+endPattern.size() > str.size())
		{
			cout << "NE" << endl;
			continue;
		}

		//위에서 찢은 두개의 string으로 입력받은 문자의 앞과 뒤와 맞는지 판별.
		string beginStr = str.substr(0, beginPattern.size());
		string endStr = str.substr(str.size() - endPattern.size(), endPattern.size());
		if (beginPattern == beginStr && endPattern == endStr)
		{
			cout << "DA" << endl;
			continue;
		}
		cout << "NE" << endl;
	}
	return 0;
}