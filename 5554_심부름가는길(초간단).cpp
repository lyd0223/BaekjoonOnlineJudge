#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;


int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int time = 0;
    for (int i = 0; i < 4; i++)
    {
        int n;
        cin >> n;
        time += n;
    }

    int minutes = time / 60;
    int seconds = time % 60;
    cout << minutes << "\n" << seconds;
}

