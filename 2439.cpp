#include <iostream>

using namespace std;
int main()
{
	int t;
	int j;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		for (j = t-i-1; j >= 1; j--)
		{
			cout << " ";
		}
		for (int k = 0; k <= i - j; k++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}