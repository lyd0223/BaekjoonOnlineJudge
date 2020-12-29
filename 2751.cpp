#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() 
{
	ios::sync_with_stdio(false);
	int n;
	int temp;
	cin >> n;
	
	vector<int> a;
	
	for(int i =0; i<n; i++)
	{
		cin >> temp;
		a.push_back(temp);
	}
	sort(a.begin(),a.end());
	for (int i = 0; i < n; i++)
	{
		cout << a[i] <<"\n";

	}
}