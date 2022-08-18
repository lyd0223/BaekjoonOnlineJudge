#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>

using namespace std;

//queue를 이용해서 구현한다.
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N , K;
    cin >> N >> K;
    
    queue<int> q;
    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }
    int ct = 1;
    cout << "<";
    while (!q.empty())
    {
        if (ct > K)
            ct -= K;
        if (ct == K)
        {
            if (q.size() == 1)
                cout << q.front();
            else
                cout << q.front() << ", ";
            
            q.pop();
           
            ct++;
        }
        else
        {
            q.push(q.front());
            q.pop();
            ct++;
        }
    }
    cout << ">";
    
    
}