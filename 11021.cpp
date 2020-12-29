#include <iostream>

using namespace std;
int main()
{
	int t;

	cin >> t;
	int n1, n2;
	for (int i = 0; i < t; i++)
	{
		cin >> n1 >> n2;

		cout <<"Case #"<<i+1<<": "<< n1 + n2 << endl;
	}
}