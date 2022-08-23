#include <bits/stdc++.h>
using namespace std;

//3474 교수가된현우
// 뒤의 0은 10을 곱할때마다 생기며, 10은 2와 5의 곱이다. 
// 따라서, 5의 제곱수의 개수를 구하면된다.
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
        
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        int result = 0;
        for (int j = 5; j <= n; j *= 5)
        {
            result += n / j;
        }
        cout << result << "\n";
    }
	return 0;
}

