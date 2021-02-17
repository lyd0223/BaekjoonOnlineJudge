#include <iostream>
#include <vector>

using namespace std;

int arr[11];

int main()
{
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for (int i = 4; i < 11; i++)
	{
		arr[i] = arr[i - 3] + arr[i - 2] + arr[i - 1];
	}
	int T;
	int n;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> n;
		
		cout << arr[n] << endl;
	}
}