#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;

	cin >> str;
	
	for (int i = 97; i < 123; i++)
	{
		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == i)
			{
				cout << j << " ";
				break;
			}
			if (str.length() -1 == j)
			{
				cout << -1 << " ";
			}
		}
	}
}