#include <bits/stdc++.h>

using namespace std;

//배열을 입력받아 a부터 b까지의 구간합을 구하는문제.
void main()
{
	int size, n;

	cin >> size >> n;
	
	vector<int> v;
	for (int i = 0; i < size; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}

	vector<int> psum_v;
	psum_v.push_back(0);
	psum_v.push_back(v[0]);
	for (int i = 1; i < v.size(); i++)
	{
		psum_v.push_back(psum_v[i] + v[i]);
	}
	for (int i = 0; i < n; i++)
	{
		int a, b; 
		cin >> a >> b;
		cout << psum_v[b] - psum_v[a-1] << endl;
	}

}