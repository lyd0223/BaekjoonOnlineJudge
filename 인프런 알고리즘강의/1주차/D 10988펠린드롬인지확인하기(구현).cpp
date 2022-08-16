#include <bits/stdc++.h>
using namespace std;

// 하나는 앞으로, 하나는 뒤로부터 해서 비교할수있겟지만
// 그냥 reverse함수 써서 비교했다.
int main()
{
	string str;
	cin >> str;

	string tempStr = str;
	
	reverse(str.begin(), str.end());
	if (str == tempStr)
		cout << 1;
	else
		cout << 0;
}