#include<iostream>
#include <string>
using namespace std;


int main() {
	string a,b;
	cin >> a >> b;
	int temp;

	temp = a[0];
	a[0] = a[2];
	a[2] = temp;
	temp = b[0];
	b[0] = b[2];
	b[2] = temp;

	if (stoi(a) > stoi(b))
		cout << stoi(a);
	else cout << stoi(b);
	

	
}