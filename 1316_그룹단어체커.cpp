#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
	int ct=0;
	vector<char> v;
	bool group = 1;
	bool check = 0;
	int n;
	string str;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		for (int i = 0; i < str.length(); i++)
		{
			
			for (int j = 0; j < v.size(); j++)
			{
				if (str[i] == v[j])
				{
					if (str[i] != v[v.size()-1])
					{
						group = 0;
						break;
					}
					check = 1;
				}
			}
			if (group == 0)
				break;
			if (check == 0)
			{
				v.push_back(str[i]);
			}
			check = 0;
		}
		if (group == 1)
			ct++;
		group = 1;
		v.erase(v.begin(), v.end());
		
	}
	cout << ct;
}