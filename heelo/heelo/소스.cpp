#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	v.push_back(5);
	v.push_back(v[0]);
	v.erase(v.begin());

	cout << v[0] << v[1];

}