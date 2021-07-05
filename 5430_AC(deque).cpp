#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <deque>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n;
        string p, xList;
        cin >> p >> n >> xList;
        
        deque<int> dq;
        //배열 넣기
        string x = "";
        for (int i = 0; i < xList.size(); i++)
        {
            if (xList[i] >= '0' && xList[i] <= '9')
            {
                x += xList[i];
            }
            else
            {
                
                if (x != "")
                {
                    dq.push_back(stoi(x));
                    x = "";
                }
            }
        }
        //함수실행
        bool isReverse = 0;
        bool isError = 0;
        for (int i = 0; i < p.size(); i++)
        {
            if (p[i] == 'D')
            {
                if (dq.empty())
                {
                    isError = 1;
                    break;
                }
                if (!isReverse)
                    dq.pop_front();
                else
                    dq.pop_back();
            }
            else if (p[i] == 'R')
            {
                if (isReverse == 1)
                    isReverse = 0;
                else
                    isReverse = 1;
            }
        }
        
        if (isError)
        {
            cout << "error\n";
        }
        else
        {
            cout << "[";
            while (!dq.empty())
            {
                if (!isReverse)
                {
                    cout << dq.front();
                    dq.pop_front();
                }
                else
                {
                    cout << dq.back();
                    dq.pop_back();
                }
                if (dq.size() != 0)
                    cout << ",";
            }
            cout << "]\n";
        }
    }
}