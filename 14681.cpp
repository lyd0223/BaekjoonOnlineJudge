#include <iostream>

using namespace std;

int main()
{
	int x, y;
	int quad;

	cin >> x >> y;
	if (x > 0 && y > 0)
		quad = 1;
	else if (x < 0 && y > 0)
		quad = 2;
	else if (x < 0 && y < 0)
		quad = 3;
	else
		quad = 4;

		cout << quad;
}