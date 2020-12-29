#include<iostream>

using namespace std;


int hansoo(int n)
{
	int interval1 ,interval2;
	int tmp1, tmp2;
	int tmp = n;

	while (1)
	{
		if (tmp / 10 == 0)
		{
			return 1;
		}
		tmp1 = tmp % 10;
		tmp2 = (tmp / 10) % 10;
		tmp /= 10;
		if (tmp / 10 == 0)
		{
			return 1;
		}
		interval1 = tmp2 - tmp1;  //0
		tmp1 = tmp % 10;  //0
		tmp2 = (tmp / 10) % 10; //1
		interval2 = tmp2 - tmp1; //1
		if (interval1 == interval2)
		{
			continue;
		}
		else
		{
			return 0;
		}
	}
}

int main() {
	int n , ct = 0;
	cin >> n;
	int* arr = new int[n];

	
	for (int i = 0; i < n; i++)
	{
		if (hansoo(i+1))
			ct++;
	}
	cout << ct;
}