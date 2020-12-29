#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	char c;
	bool check=0;
	int ct = 1, ctmax = 1;
	cin >> str;
	
	if (str.length() == 1)
	{
		c = toupper(str[0]);
		cout << c;
	}
	else 
	{
		for (int i = 0; i < str.length(); i++)
		{
			str[i] = toupper(str[i]);
		}
		sort(str.begin(), str.end());

		for (int i = 1; i < str.length(); i++)
		{
			if (str[i] == str[i - 1])
			{
				ct++;

				if (ct == ctmax)
				{
					check = 1;
				}
				if (ct > ctmax && check == 1)
				{
					ctmax = ct;
					c = str[i];
					check = 0;
				}
				if (ct > ctmax && check == 0)
				{
					c = str[i];
					ctmax = ct;
				}
			}
			else
			{
				ct = 1;
			}

		}
		if (check == 1)
			cout << "?" << endl;
		else
			cout << c;
	}
}