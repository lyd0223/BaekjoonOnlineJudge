#include <iostream>
#include <string>
using namespace std;

bool arr[1001];
int num = 0;
int ct = 0;
int main()
{
	arr[1] = 1;
	
	for (int i = 2; i < 999; i++)
	{
		int j = 2;
		while (1)
		{
			num = i * j;
			if (num > 1000)
			{
				break;
			}
			arr[num] = 1;
			j++;
		}
	}
	int n;
	int n1;
	cin >> n; 
	for (int i = 0; i < n; i++)
	{
		cin >> n1;
		if (arr[n1] == 0)
		{
			ct++;
		}
	}
	cout << ct;
}