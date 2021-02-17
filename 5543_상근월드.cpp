#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int bervarage[2], hamberg[3];

	for (int i = 0; i < 3; i++)
	{
		cin >> hamberg[i];
	}
	for (int i = 0; i < 2; i++)
	{
		cin >> bervarage[i];
	}
	
	sort(hamberg, hamberg + 3);
	sort(bervarage, bervarage + 2);
	
	cout << hamberg[0] + bervarage[0] - 50;
}