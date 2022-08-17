#include <bits/stdc++.h>
using namespace std;

// 경우의수. 입지않는 경우를 고려해서 구함.
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int caseN;
	cin >> caseN;
	
	for (int i = 0; i < caseN; i++)
	{
		int n;
		cin >> n;

		map<string, int> m;
		for (int j = 0; j < n; j++)
		{
			string name, type;
			cin >> name >> type;
			
			m[type]++;
		}
		
		int result = 1;
		for (auto data : m)
		{
			result *= (data.second + 1);
		}
		result--; // 아무것도 입지않은경우.
		cout << result << endl;
	}
	return 0;
}