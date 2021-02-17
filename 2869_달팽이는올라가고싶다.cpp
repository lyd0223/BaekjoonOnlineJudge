#include <iostream>

using namespace std;

int main()
{
	int a, b, v, ct = 0;
	cin >> a >> b >> v;

	if ((v - a) % (a - b)==0)
		ct = (v - a) / (a - b);
	else
		ct = (v - a) / (a - b) + 1;
	cout << ct+1;
}