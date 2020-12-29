#include<iostream>

using namespace std;

int n;

int boonhaehab(int a)
{
	int tmp1, sum = a;
	int tmp = a;

	while (1)
	{
		if (tmp == 0)
		{
			if (sum == n)
			{
				return 1;
			}
			else
				return 0;
		}
		else
		{
			tmp1 = tmp % 10;
			sum += tmp1;
			tmp /= 10;
		}
		
	}
}

int main() {
	int ct = 0;
	cin >> n;
	int* arr = new int[n];


	for (int i = 0; i < n; i++)
	{
		if (boonhaehab(i))
		{
			cout << i;
			break;
		}
		if(i==n-1)
		cout << "0";
	}
}