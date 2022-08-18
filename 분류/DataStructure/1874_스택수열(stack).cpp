#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    
    int* check = new int[n] {};
    stack<int> s;
    s.push(1);
    int temp = 2;
    string answer = "+\n";
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (s.empty())
        {
            s.push(temp);
            answer += "+\n";
            temp++;
        }
        if (s.top() == num)
        {
            s.pop();
            answer += "-\n";
        }
        else
        {
            if (s.top() > num)
            {
                answer = "NO";
                break;
            }
            while (s.top() < num)
            {
                s.push(temp);
                answer += "+\n";
                temp++;
            }
            s.pop();
            answer += "-\n";
        }
    }
    
    cout << answer;
}