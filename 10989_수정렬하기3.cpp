#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	int ctArr[10001] = { 0, };
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> m;
		ctArr[m]++;
	}
	for (int i = 1; i < 10001; i++)
	{
		for (int j = 0; j < ctArr[i]; j++)
			cout << i << "\n";
	}

}