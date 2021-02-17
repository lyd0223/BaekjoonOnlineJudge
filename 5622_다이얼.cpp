#include <iostream>

using namespace std;

int main()
{
	
	string str;
	int ct = 0;
	cin >> str;
	
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 65 || str[i] == 66 || str[i] == 67)
		{
			ct += 3;
		}
		else if (str[i] == 68 || str[i] == 69 || str[i] == 70)
		{
			ct += 4;
		}
		else if (str[i] == 71 || str[i] == 72 || str[i] == 73)
		{
			ct += 5;
		}
		else if (str[i] == 74 || str[i] == 75 || str[i] == 76)
		{
			ct += 6;
		}
		else if (str[i] == 77 || str[i] == 78 || str[i] == 79)
		{
			ct += 7;
		}
		else if (str[i] == 80 || str[i] == 81 || str[i] == 82 ||str[i] ==83)
		{
			ct += 8;
		}
		else if (str[i] == 84 || str[i] == 85 || str[i] == 86)
		{
			ct += 9;
		}
		else if (str[i] == 87 || str[i] == 88 || str[i] == 89 || str[i] == 90)
		{
			ct += 10;
		}
	}

	cout << ct;

}