#include <bits/stdc++.h>

using namespace std;
//https://www.acmicpc.net/problem/2309

//9C7 = 9C2 이기때문에,
//9명의 키 전체 합에서 빼야 하는 2명을 찾는다.

//빼야하는 난장이 2명 탐색.
vector<int> FindTwo(vector<int>& v, int sum)
{
	vector<int> result;
	for (int i = 0; i < 9; i++)
	{
		for (int j = i; j < 9; j++)
		{
			int tempSum = sum;
			if (sum - v[i] - v[j] == 100)
			{
				result.push_back(v[i]);
				result.push_back(v[j]);
				return result;
			}
		}
	}
}

int main()
{
	vector<int> v;
	v.reserve(9);
	for (int i = 0; i < 9; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());

	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		sum += v[i];
	}

	vector<int> erase_v = FindTwo(v, sum);
	for (int i = 0; i < 9; i++)
	{
		if(v[i] != erase_v[0] && v[i] != erase_v[1])
			cout << v[i] << endl;
	}
	return 0;
}