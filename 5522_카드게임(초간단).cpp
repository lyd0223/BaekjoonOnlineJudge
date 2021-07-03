#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;


int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int score = 0;
    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        score += n;
    }

    cout << score;
}

