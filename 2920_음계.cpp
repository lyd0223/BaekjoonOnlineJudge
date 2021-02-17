#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int c[8];
	int a = 0, d = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> c[i];
		if (c[i] == i+1)
		{
			
			a++;
		}
		else
		{
			
			if (c[i] == 8 - i)
			{
				d ++;
			}
			else
			{
				break;
			}
		}
	}
	if(a==8)
		cout << "ascending";
	else if(d==8)
		cout << "descending";
	else
		cout << "mixed";

}