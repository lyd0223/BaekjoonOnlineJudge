#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string X, Y;
    cin >> X >> Y;
    
    reverse(X.begin(), X.end());
    reverse(Y.begin(), Y.end());
    
    string sum = to_string(stoi(X) + stoi(Y));
    reverse(sum.begin(), sum.end());
    cout << stoi(sum);
}