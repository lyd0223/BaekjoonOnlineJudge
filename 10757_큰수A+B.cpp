#include <iostream>
#include <string>
using namespace std;

#define MAX  10002

int a[MAX];
int b[MAX];
int sum[MAX];
string str1, str2;
int carry = 0;

int main()
{
	cin >> str1 >> str2;
	char temp;
	for (int i = 0; i < str1.length(); i++)
	{
		temp = str1[str1.length() - 1 - i];
		a[i] =  stoi(&temp);
	}
	for (int i = 0; i < str2.length(); i++)
	{
		temp = str2[str2.length() - 1 - i];
		b[i] = stoi(&temp);
	}

	for (int i = 0; i <max(str2.length(), str1.length()); i++)
	{
		sum[i] = a[i] + b[i] + carry;
		if (sum[i] >= 10)
		{
			sum[i] -= 10;
			carry = 1;
		}
		else
			carry = 0;
	}
	
	if(carry ==1)
		cout << carry;

	for (int i = max(str2.length(), str1.length())-1; i >= 0; i--)
	{
		cout << sum[i];
	}

}