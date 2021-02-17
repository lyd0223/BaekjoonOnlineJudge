#include <iostream>
using namespace std;

int house[1001][3];
int main()
{
	
	int n;
	int a, b, c;
	int minimum;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b >> c;
		house[i + 1][0] = min(house[i][1], house[i][2]) + a;
		house[i + 1][1] = min(house[i][0], house[i][2]) + b;
		house[i + 1][2] = min(house[i][0], house[i][1]) + c;
	}
	minimum =  min(house[n][0], house[n][1]);
	minimum = min(minimum, house[n][2]);

	cout << minimum;
}