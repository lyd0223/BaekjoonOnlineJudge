#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    queue<int> q;
    for(int i = 1; i<= n; i++)
    {
        q.push(i);
    }
    while (q.size() > 1)
    {
        q.pop();
        q.push(q.front());
        q.pop();
    }
    cout << q.front();
}