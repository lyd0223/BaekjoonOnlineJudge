#include <bits/stdc++.h>
using namespace std;

// 2259 수열
// 구간합 이용.

int gPsumArr[100000];

//온도의 최대 합을 구함.
int FindMax(int K, int N)
{
	int max = gPsumArr[K-1];
	
	for (int i = 1; i <= N-K; i++)
	{
		if (gPsumArr[i + K - 1] - gPsumArr[i - 1] > max)
		{
			max = gPsumArr[i + K - 1] - gPsumArr[i - 1];
		}
	}
	return max;
}

int main()
{
	vector<int> v;
	v.reserve(100000);

	int N, K;
	cin >> N >> K;
	
	//누적합 배열 만들기.
	for (int i = 0; i < N; i++)
	{
		int n;
		cin >> n;
		v.push_back(n);
		if (i == 0)
			gPsumArr[0] = n;
		else
			gPsumArr[i] = gPsumArr[i - 1] + n;
	}
	
	cout << FindMax(K,N);
	return 0;
}