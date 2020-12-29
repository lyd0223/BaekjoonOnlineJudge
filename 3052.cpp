#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
	int n[10];
	int count = 0;

	for (int i = 0; i < 10; i++)
		cin >> n[i];
	for (int i = 0; i < 10; i++)
	{
		n[i] = n[i] % 42;
	}
	sort(n, n+10);
	for (int i = 0; i < 10; i++)
	{
		if (n[i] == n[i + 1])
		{
			count++;
		}
		else
		{
		}
	}
	cout << 10 - count << endl;

	
	
}