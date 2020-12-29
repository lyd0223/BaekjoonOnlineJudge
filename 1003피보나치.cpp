#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int ct0 = 0, ct1 = 0;
int fibonacci(int n) {
    if (n == 0) {
        ct0++;
        return 0;
    }
    else if (n == 1) {
        ct1++;
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main() 
{
    //시간초과로인해 실패
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int t;
    cin >> t;
    int *n = new int[t];
    
    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
        fibonacci(n[i]);
        cout << ct0 << " " << ct1 << "\n";
        ct0 = 0;
        ct1 = 0;
    }
}