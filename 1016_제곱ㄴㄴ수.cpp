#include <iostream>
#include <math.h>

using namespace std;

	
int main()
{
	long long min, max;
	float f;
	int count = 0;

	cin >> min >> max;
	for (int i = min; i < max+1; i++)
	{
		if (((int)sqrt(i) * (int)sqrt(i)) == i)
		{
			count++;
		}
	}
	cout << count;
}