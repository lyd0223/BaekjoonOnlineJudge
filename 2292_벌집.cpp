#include <iostream>

using namespace std;

int main()
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	int ct = 0;
	cin >> n;

	for (int i = 1; i < n; i += (6*ct))
	{
		ct++;
	}
	cout << ct+1;

}