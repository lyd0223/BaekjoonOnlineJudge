#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int sum = 0;
	int tmp = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			tmp += arr[j];
		}
		sum += tmp;
		tmp = 0;
	}
	cout << sum;
}