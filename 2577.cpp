#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main()
{
	int n, count = 0;
	int a, b, c;
	string s;
	int n0 = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0, n8 = 0, n9 = 0;

	
	cin >> a >> b >> c;
	n = a * b * c;
	s = to_string(n);

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 48)
			n0++;
		else if (s[i] == 49)
			n1++;
		else if (s[i] == 50)
			n2++;
		else if (s[i] == 51)
			n3++;
		else if (s[i] == 52)
			n4++;
		else if (s[i] == 53)
			n5++;
		else if (s[i] == 54)
			n6++;
		else if (s[i] == 55)
			n7++;
		else if (s[i] == 56)
			n8++;
		else if (s[i] == 57)
			n9++;

	}
	cout << n0 << endl << n1 << endl << n2 << endl << n3 << endl << n4 << endl << n5 << endl << n6 << endl << n7 << endl << n8 << endl << n9;
	
}