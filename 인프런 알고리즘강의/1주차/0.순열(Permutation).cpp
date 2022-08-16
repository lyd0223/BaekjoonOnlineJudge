#include <bits/stdc++.h>

using namespace std;

void main()
{
	vector<int> v;
	
	for (int i = 1; i <= 3; i++)
	{
		v.push_back(i);
	}

	//prev_permutation 내림차순
	cout << "next_permutation" << endl;
	vector<vector<int>> nextPermu_v;
	do
	{
		nextPermu_v.push_back(v);
	} while (next_permutation(v.begin(), v.end()));

	for (auto data : nextPermu_v)
	{
		for (auto data2 : data)
		{
			cout << data2 << " ";
		}
		cout << endl;
	}


	//prev_permutation 오름차순
	cout << "prev_permutation" << endl;
	sort(v.begin(), v.end(), greater<int>());
	vector<vector<int>> prevPermu_v;
	do
	{
		prevPermu_v.push_back(v);
	} while (prev_permutation(v.begin(), v.end()));

	for (auto data : prevPermu_v)
	{
		for (auto data2 : data)
		{
			cout << data2 << " ";
		}
		cout << endl;
	}

}