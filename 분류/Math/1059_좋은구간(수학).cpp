#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//그냥 좀만 생각하면됨.
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int L;
    cin >> L;
    
    vector<int> numList;
    for (int i = 0; i < L; i++)
    {
        int x;
        cin >> x;
        numList.push_back(x);
    }
    sort(numList.begin(), numList.end());

    int n; 
    cin >> n;
 
	for (int i = 0; i < numList.size(); i++)
	{
        if (n == numList[i])
        {
            cout << 0;
            break;
        }
        else
        {
            if (numList[i] > n)
            {
                if (i != 0)
                    cout << (n - numList[i - 1]) * (numList[i] - n)-1;
                else
                    cout << n * (numList[i] - n)-1;
                break;
            }
        }
	}

    
}