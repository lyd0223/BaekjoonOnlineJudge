#include <bits/stdc++.h>
using namespace std;

//이건 뭐 말이 필요없다...
// 그냥 반복문 돌면서 개수 세준다.
// 아스키 코드 이용
// map을 이용해도 된다.
int main()
{
	string str;
	cin >> str;
	
	int countArr[26] = {0,};
	for (int i = 0; i < str.size(); i++)
	{
		countArr[str[i] - 97]++;
	}
	
	for (int i = 0; i < sizeof(countArr) / 4; i++)
	{
		cout << countArr[i] << " ";
	}
}