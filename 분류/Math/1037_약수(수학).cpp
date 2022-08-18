#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//1과 자기 자신을 뺀것이 진짜 약수이니,
//정렬해서 제일 작은수와 큰수를 곱한게 N이된다.
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int c;
    cin >> c;

    vector<int> numList;
    for (int i = 0; i < c; i++)
    {
        int n;
        cin >> n;
        numList.push_back(n);
    }

    sort(numList.begin(), numList.end());
    
    cout << numList[numList.size()-1] * numList[0];

    
}