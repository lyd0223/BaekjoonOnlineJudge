#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;
    int num1 = a, num2 = b;
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    int gcd = a;
    int lcm = num1 * num2 / gcd;
    cout << gcd << "\n" << lcm;
    
    
    
}