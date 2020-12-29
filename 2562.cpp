#include <iostream>
#include <string>

using namespace std;


int main()
{
	int num[9];
	int max;
	int maxi;

	for (int i = 0; i < 9; i++)
	{
		cin >> num[i];
		if (i == 0)
		{
			max = num[i];
			maxi = i + 1;
		}
		
		else
		{
			if (num[i] > max)
			{
				max = num[i];
				maxi = i+1;
			}
		}
	}
	cout << max << endl << maxi << endl;
	return 0;
}