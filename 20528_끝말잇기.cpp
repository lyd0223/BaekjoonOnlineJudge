#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	string str;
	bool pelindrom = 0;
	bool same = 0;
	char temp;

	cin >> n;
	

	for (int j = 0; j < n; j++)
	{
		cin >> str;
		for (int i = 0; i < str.length()/2; i++)
		{
			
			if (str[i] == str[str.length() - i - 1])
			{
				pelindrom = 1;
			}
			else
			{
				pelindrom = 0;
				break;
			}
		}
		
			
		if (j != 0)
		{
			if (str[0] == temp)
			{
				same = 1;
			}
			else
			{
				same = 0;
				break;
			}
		}
		temp = str[str.length()-1];
	}
	if (pelindrom == 1)
	{
		if (same == 1)
		{
			cout << 1;
		}
		else
			cout << 0;
	}
	else
		cout << 0;

}