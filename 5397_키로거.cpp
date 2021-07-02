#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<string> v;
	for (int i = 0; i < n; i++)
	{
		string str ;
		string outstr ="";
		cin >> str;
		
		int piv = 0;
		for (int j = 0; j < str.length(); j++)
		{
			
			if (str[j] == '<')
			{
				if (piv > 0)
					piv--;
			}
			else if (str[j] == '>')
			{
				if (piv < outstr.length())
					piv++;
			}
			else if (str[j] == '-' )
			{
				if (!outstr.empty()&& piv != 0)
				{
					outstr.erase(piv-1, 1);
					piv--;
				}
			}
			else
			{
				
				outstr.insert(outstr.begin() + piv,str[j]);
				piv++;
			}

			
		}
		cout << outstr << endl;
	}
	return 0;
}