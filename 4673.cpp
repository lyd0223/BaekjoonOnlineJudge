#include<iostream>

using namespace std;

int d(int n)
{
	int sum = n;
	while (n != 0)
	{
		sum += n % 10;
		n = n / 10;
	}
	return sum;
}

bool arr[10000];

int main() {
	
	for (int i = 0; i < 10000; i++)
	{
		arr[d(i)] = 1;
	}
	for (int i = 0; i < 10000; i++)
	{
		if (arr[i] == 0)
			cout << i << endl;
	}
}