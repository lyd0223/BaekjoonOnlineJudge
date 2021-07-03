#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;


int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int three, two;
    
    cin >> three >> two;
    
    int one = two + two - three;

    cout << one;
}

