#include <bits/stdc++.h>

using namespace std;

void main()
{
	string dopa = "life is limited";
	
	//Q1. 앞에서 3개의 문자열을 뽑아내라
	string tempstr = "";
	tempstr = dopa.substr(0,3);
	cout << tempstr << endl;

	// Q2. 거꾸로
	reverse(dopa.begin(), dopa.end());
	cout << dopa << endl;

	// Q3. 거꾸로하고 이후에 "dopa!!" 추가.
	dopa += "dopa!!";
	cout << dopa << endl;
}