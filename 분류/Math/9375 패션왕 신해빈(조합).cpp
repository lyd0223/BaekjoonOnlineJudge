#include <bits/stdc++.h>
using namespace std;

// 조합 이용, 시간초과.
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
		if (n == 0)
		{
			cout << 0 << endl;
			continue;
		}
		map<string, int> m;
		for (int i = 0; i < n; i++)
		{
			string type, name;
			cin >> name >> type;
			m[type]++;
		}
		
		vector<int> v;
		int ct = 0;
		map<string, int>::iterator iter;
		for (iter = m.begin(); iter != m.end(); iter++)
		{
			v.push_back(iter->second);
			ct++;
		}

		long long result = 0;

		//prev_permutation을 이용한 조합 구하기.
		sort(v.begin(), v.end());
		for (int i = 1; i <= ct; i++)
		{
			//checkv 앞에서부터 의상 종류만큼 true로 변경.
			vector<bool> checkv(ct, false);
			for (int j = 0; j < i; j++)
			{
				checkv[j] = true;
			}

			do {
				int var = 1;
				for (int i = 0; i < v.size(); i++)
				{
					if (checkv[i])
					{
						var *= v[i];
					}
				}
				result += var;
			} while (prev_permutation(checkv.begin(), checkv.end()));
			
		}
		cout << result << endl;
	}
	return 0;
}