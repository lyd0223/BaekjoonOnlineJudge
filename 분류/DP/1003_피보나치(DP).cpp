#include <iostream>
#include <string>
#include <vector>
using namespace std;

int ct0 = 0, ct1 = 0;
//
//int fibonacci(int n) {
//    if (n == 0) {
//        ct0++;
//        return 0;
//    }
//    else if (n == 1) {
//        ct1++;
//        return 1;
//    }
//    else {
//        return fibonacci(n - 1) + fibonacci(n - 2);
//    }
//}


//일정한 규칙을 띈다.

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    /*
    int* n = new int[t];

    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
        fibonacci(n[i]);
        cout << ct0 << " " << ct1 << "\n";
        ct0 = 0;
        ct1 = 0;
    }
    */
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> v(n + 2, 0);
        v[0] = 1;
        v[1] = 0;

        for (int i = 2; i <= n + 1; i++)
        {
            v[i] = v[i - 1] + v[i - 2];
        }
        cout << v[n] << " " << v[n+1] << "\n";
    }
}