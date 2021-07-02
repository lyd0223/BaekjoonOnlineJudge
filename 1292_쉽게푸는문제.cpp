#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

//그냥 쉬움.
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int A, B;
    cin >> A >> B;
    
    
    int arr[1001] = { 0, };
    int ct = 0;
    int n = 1;
    for (int i = 1; i <= B; i++)
    {
        arr[i] = n;
        
        ct++;
        if (ct >= n)
        {
            ct = 0;
            n++;
        }
    }
    
    int answer = 0;
    for (int i = A; i <= B; i++)
    {
        answer += arr[i];
    }
    cout << answer;

}