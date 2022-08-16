#include <bits/stdc++.h>

using namespace std;
//https://www.acmicpc.net/problem/2309


//7명을 고르기위해 조합을 이용했다.

//키의 합이 100이되는 난장이 탐색.
void FindSeven(vector<int>& v)
{
	vector<bool> comb_v = { 1,1,1,1,1,1,1,0,0 };

	do {
		int sum = 0;
		for (int i = 0; i < 7; i++)
		{
			sum += v[i];
		}
		if (sum == 100)
			return;
	} while (next_permutation(v.begin(), v.end()));
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

	FindSeven(v);
	for (int i = 0; i < 7; i++)
	{
		cout << v[i] << endl;
	}
	return 0;
}