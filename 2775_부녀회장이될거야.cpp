#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int arr[15][15];

int main()
{
	int t;
	int a,b;
	int answer;
	cin >> t;
	for (int i = 1; i < 15; i++)
	{
		arr[0][i] = i;
		arr[i][1] = 1;
	}
	for (int i = 1; i < 15; i++)
	{
		for (int j = 2; j < 15; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
	}
	for (int i = 0; i < t; i++)
	{
		cin >> a;
		cin >> b;

		cout << arr[a][b] <<"\n";
	}
	
}