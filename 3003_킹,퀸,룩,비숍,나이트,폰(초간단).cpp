#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{   
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int k = 1, q=1, r=2, b=2, kn=2, p=8;
    
    int num;
    
    cin >> num;
    cout << k - num << " ";

    cin >> num;
    cout << q - num << " ";

    cin >> num;
    cout << r - num << " ";

    cin >> num;
    cout << b - num << " ";

    cin >> num;
    cout << kn - num << " ";

    cin >> num;
    cout << p - num << " ";
}