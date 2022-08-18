#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int tmp, ct = 0;

void push(int x)
{
	v.push_back(x);
	ct++;
	tmp = v.at(ct-1);
}
void pop()
{
	if (ct == 0)
		cout << -1 << endl;
	else 
	{
		tmp = v.at(ct-1);
		cout << tmp << endl;
		v.pop_back();
		ct--;
	}
}
void size()
{
	cout << v.size() << endl;
}
void empty()
{
	if (v.size() == 0)
	{
		cout << 1 << endl;
	}
	else
		cout << 0 << endl;
}
void top()
{
	if (ct == 0)
	{
		cout << -1 << endl;
	}
	else {
		tmp = v.back();
		cout << tmp << endl;

	}
}

int main()
{
	int n;
	int x;
	string str;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		if (str == "push")
		{
			cin >> x;
			push(x);
		}
		else if (str == "pop")
		{
			pop();
		}
		else if (str == "size")
		{
			size();
		}
		else if (str == "empty")
		{
			empty();
		}
		else if (str == "top")
		{
			top();
		}
	}
}