#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
using namespace std;


int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    string board;
    cin >> board;

    string answer = "";
    //못넣을경우(-1)를 판단하는 불값.
    bool check = 0;
    for (int i = 0; i < board.size(); )
    {
        if (board[i] == 'X')
        {
            int t = i;
            int ct = 0;
            while (board[t] == 'X')
            {
                t++;
                ct++;
            }
            i += ct;
            //X의 개수가 홀수일때
            if (ct % 2 != 0) 
            {
                check = 1;
                break;
            }
            else
            {
                while (ct != 0)
                {
                    if (ct / 4 > 0)
                    {
                        answer += "AAAA";
						ct -= 4;
                    }
                    else
                    {
                        answer += "BB";
                        ct -= 2;
                    }
                }
            }
        }
        else
        {
            answer += ".";
            i++;
        }
    }

    if (check == 1)
        cout << -1;
    else
        cout << answer;
}

