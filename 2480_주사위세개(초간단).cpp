#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    vector<int> arr;
    for (int i = 0; i < 3; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    if (arr[0] != arr[1] && arr[1] != arr[2] && arr[2] != arr[0])
    {
        cout << arr[2] * 100;
    }
    else if (arr[0] == arr[1] && arr[1] == arr[2])
    {
        cout << 10000 + arr[0] * 1000;
    }
    else
    {
        if (arr[0] == arr[1])
        {
            cout << 1000 + arr[0] * 100;
        }
        else if (arr[1] == arr[2])
        {
            cout << 1000 + arr[1] * 100;
        }
        else
        {
            cout << 1000 + arr[2] * 100;
        }
    }
}

