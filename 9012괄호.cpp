#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<char> v;
int ct = 0;
char tmp;

int main()
{
    int n, bracket_count = 0;
    string str;
	bool b = 0;

	cin >> n;
	
	while (n>0)
	{
		cin >> str;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '(')
			{
				bracket_count++;
			}
			else
			{
				bracket_count--;
				if (bracket_count < 0)
				{
					b = 1;
				}
			}
			
		}
		if (b == 1)
		{
			cout << "NO\n";
		}
		else 
		{
			if (bracket_count != 0)
				cout << "NO\n";
			else
				cout << "YES\n";
		}
		b = 0;
		bracket_count = 0;
		n--;
	}
}